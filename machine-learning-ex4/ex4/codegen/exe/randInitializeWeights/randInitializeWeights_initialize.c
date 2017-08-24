/*
 * randInitializeWeights_initialize.c
 *
 * Code generation for function 'randInitializeWeights_initialize'
 *
 * C source code generated on: Thu Sep 24 08:58:29 2015
 *
 */

/* Include files */
#include "randInitializeWeights.h"
#include "randInitializeWeights_initialize.h"
#include "randInitializeWeights_data.h"

/* Custom Source Code */
void main()
{
}

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void randInitializeWeights_initialize(void)
{
  uint32_T r;
  int32_T mti;
  method_not_empty = FALSE;
  memset(&state[0], 0, 625U * sizeof(uint32_T));
  r = 5489U;
  state[0] = 5489U;
  for (mti = 0; mti < 623; mti++) {
    r = (r ^ r >> 30U) * 1812433253U + (uint32_T)(1 + mti);
    state[1 + mti] = r;
  }

  state[624] = 624U;
}

/* End of code generation (randInitializeWeights_initialize.c) */
