/*
 * randInitializeWeights_emxutil.h
 *
 * Code generation for function 'randInitializeWeights_emxutil'
 *
 * C source code generated on: Thu Sep 24 08:58:29 2015
 *
 */

#ifndef __RANDINITIALIZEWEIGHTS_EMXUTIL_H__
#define __RANDINITIALIZEWEIGHTS_EMXUTIL_H__
/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "rtwtypes.h"
#include "randInitializeWeights_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
#endif
/* End of code generation (randInitializeWeights_emxutil.h) */
