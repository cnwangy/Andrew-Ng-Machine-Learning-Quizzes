/*
 * randInitializeWeights_emxutil.h
 *
 * Code generation for function 'randInitializeWeights_emxutil'
 *
 * C source code generated on: Thu Sep 17 23:30:38 2015
 *
 */

#ifndef __RANDINITIALIZEWEIGHTS_EMXUTIL_H__
#define __RANDINITIALIZEWEIGHTS_EMXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blascompat32.h"
#include "rtwtypes.h"
#include "randInitializeWeights_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (randInitializeWeights_emxutil.h) */
