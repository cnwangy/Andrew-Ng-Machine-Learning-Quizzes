/*
 * randInitializeWeights_terminate.c
 *
 * Code generation for function 'randInitializeWeights_terminate'
 *
 * C source code generated on: Thu Sep 17 23:30:38 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "randInitializeWeights.h"
#include "randInitializeWeights_terminate.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void randInitializeWeights_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void randInitializeWeights_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (randInitializeWeights_terminate.c) */
