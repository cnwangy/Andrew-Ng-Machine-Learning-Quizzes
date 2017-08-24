#include "randInitializeWeights.h"
#include "randInitializeWeights_emxutil.h"
#include "rand.h"

#include <stdio.h>
#include <stdlib.h>
typedef short INT16;
INT16 optind=1;
char* optarg=NULL;
char opterr=1;
	
#define _next_char(string) (char)(*(string+1)) 


char * strchr(const char *str, int ch)
{
   while (*str && *str != (char)ch)
        str++;
   if (*str == (char)ch)
        return((char *)str);
   return(NULL);
}

char getopt(INT16 argc, char *argv[], char *opstring) 
{ 
	static char *pIndexPosition = NULL; /* place inside current argv string */ 
	char *pArgString = NULL; /* where to start from next */ 
	char *pOptString = NULL; /* the string in our program */ 


	if (pIndexPosition != NULL) { 
		/* we last left off inside an argv string */ 
		if (*(++pIndexPosition)) { 
		/* there is more to come in the most recent argv */ 
		pArgString = pIndexPosition; 
		} 
	} 

	if (pArgString == NULL) { 
		/* we didn't leave off in the middle of an argv string */ 
		if (optind >= argc) { 
			/* more command-line arguments than the argument count */ 
			pIndexPosition = NULL; /* not in the middle of anything */ 
			return EOF; /* used up all command-line arguments */ 
		} 

		pArgString = argv[optind++]; /* set this to the next argument ptr */ 

		if (('/' != *pArgString) && /* doesn't start with a slash or a dash? */ 
			('-' != *pArgString)) { 
			--optind; /* point to current arg once we're done */ 
			optarg = NULL; /* no argument follows the option */ 
			pIndexPosition = NULL; /* not in the middle of anything */ 
			return EOF; /* used up all the command-line flags */ 
		} 

		/* check for special end-of-flags markers */ 
		if ((strcmp(pArgString, "-") == 0) || 
			(strcmp(pArgString, "--") == 0)) { 
			optarg = NULL; /* no argument follows the option */ 
			pIndexPosition = NULL; /* not in the middle of anything */ 
			return EOF; /* encountered the special flag */ 
		} 

		pArgString++; /* look past the / or - */ 
	} 

	if (':' == *pArgString) { /* is it a colon? */ 
		/*--------------------------------------------------------------------- 
		* Rare case: if opterr is non-zero, return a question mark; 
		* otherwise, just return the colon we're on. 
		*-------------------------------------------------------------------*/ 
		return (opterr ? '?' : ':'); 
	} 
	else if ((pOptString = strchr(opstring, *pArgString)) == 0) { 
		optarg = NULL; /* no argument follows the option */ 
		pIndexPosition = NULL; /* not in the middle of anything */ 
		return (opterr ? '?' : *pArgString); 
	} 
	else { 
		if (':' == _next_char(pOptString)) { /* is the next letter a colon? */ 
			if ('\0' != _next_char(pArgString)) { /* argument in this argv? */ 
				optarg = &pArgString[1]; /* Yes, it is */ 
			} 
			else { 
				if (optind < argc) 
					optarg = argv[optind++]; 
				else { 
					optarg = NULL; 
					return (opterr ? '?' : *pArgString); 
				} 
			} 
		pIndexPosition = NULL; /* not in the middle of anything */ 
		} 
		else { 
			optarg = NULL; /* no argument follows the option */ 
			pIndexPosition = pArgString; /* point to the letter we're on */ 
		} 
		return *pArgString; /* return the letter that matched */ 
	} 
} 

void split_string_cmd(char* string_cmd, short cmdlen, short *pargc, char **argv)
{
	INT16 argc = 1;
	INT16 i=0;
	argv[0] = (char *)&string_cmd[0];

	//printf("split_string_cmd1:%s\n", string_cmd);

	/*move to split_string_cmd for code slim*/
	optind = 1;
	optarg = NULL;

	for(i=0; i< cmdlen-1;i++)
	{
		if(string_cmd[i] == '-' &&   (string_cmd[i+1]<='0' || string_cmd[i+1]>='9') )
		{
			string_cmd[i-1]='\0';
			argv[argc] = (char *)&string_cmd[i];
			argc++;
		}
	}
	*pargc=argc;

	return;
}

void main()
{

	INT16 at_cmd_len;

	int argc = 0;
	char *argv[15];
	char *opString = "h:n:i:s:?";
	char *pCmdBuf=NULL;
	int opt;
	char a[100];
	int devNum=0,devCnt=0;

	unsigned char hostadd[32]={0};
	unsigned char id[64][8]={0};
	unsigned char num[4]={0};
	unsigned char stat[8]={0};
	emxArray_real_T **aa=NULL;
	int16_T lin=2,i=0;
	int16_T lout=4;

	pCmdBuf=a;
	at_cmd_len=strlen("http -hwww.sinaapp.com -n2 -i00000123 -i0cb80123 -s01234567");
	strcpy(pCmdBuf,"http -hwww.sinaapp.com -n2 -i00000123 -i0cb80123  -s01234567",at_cmd_len);
	split_string_cmd(pCmdBuf, at_cmd_len, &argc, argv);
	optind = 1; 
	optarg = NULL; 
	
	opt = getopt(argc, argv, opString);
	while (opt != -1)
	{
		switch (opt)
		{
		case 'h':
			
			memcpy(hostadd, optarg,strlen(optarg));

			break;
		
		case 'n':  /*only support Open now*/
			memcpy(num, optarg, strlen(optarg));
			devNum=atoi(num);
			break;
		
		case 'i':  
			memcpy(id[devCnt], optarg, strlen(optarg));
			if(devCnt<(devNum-1))devCnt++;
			break;

		case 's':  
			stat[0]=strlen(optarg);
			memcpy(stat, optarg, strlen(optarg));
			break;

		case '?':
		default:
			break;
		}
		opt = getopt(argc, argv, opString);
		
	}

	
	emxInit_real_T(aa,100);
	randInitializeWeights(lin,lout,aa);
}