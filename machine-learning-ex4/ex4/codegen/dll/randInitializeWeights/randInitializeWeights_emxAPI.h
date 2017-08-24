/*
 * randInitializeWeights_emxAPI.h
 *
 * Code generation for function 'randInitializeWeights_emxAPI'
 *
 * C source code generated on: Tue Sep 22 15:13:44 2015
 *
 */

#ifndef __RANDINITIALIZEWEIGHTS_EMXAPI_H__
#define __RANDINITIALIZEWEIGHTS_EMXAPI_H__
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
#ifdef __cplusplus
extern "C" {
#endif
extern emxArray_real_T *emxCreateND_real_T(int32_T numDimensions, int32_T *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(real_T *data, int32_T numDimensions, int32_T *size);
extern emxArray_real_T *emxCreateWrapper_real_T(real_T *data, int32_T rows, int32_T cols);
extern emxArray_real_T *emxCreate_real_T(int32_T rows, int32_T cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (randInitializeWeights_emxAPI.h) */
