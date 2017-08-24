/*
 * randInitializeWeights_initialize.c
 *
 * Code generation for function 'randInitializeWeights_initialize'
 *
 * C source code generated on: Thu Sep 17 23:30:37 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "randInitializeWeights.h"
#include "randInitializeWeights_initialize.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Declarations */

/* Function Definitions */
void randInitializeWeights_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (randInitializeWeights_initialize.c) */
