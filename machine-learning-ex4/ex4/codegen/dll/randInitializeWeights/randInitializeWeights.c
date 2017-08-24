/*
 * randInitializeWeights.c
 *
 * Code generation for function 'randInitializeWeights'
 *
 * C source code generated on: Tue Sep 22 15:13:44 2015
 *
 */

/* Include files */
#include "randInitializeWeights.h"
#include "randInitializeWeights_emxutil.h"
#include "rand.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void randInitializeWeights(int16_T L_in, int16_T L_out, emxArray_real_T *W)
{
  int32_T b_W;
  int32_T c_W;

  /* RANDINITIALIZEWEIGHTS Randomly initialize the weights of a layer with L_in */
  /* incoming connections and L_out outgoing connections */
  /*    W = RANDINITIALIZEWEIGHTS(L_in, L_out) randomly initializes the weights  */
  /*    of a layer with L_in incoming connections and L_out outgoing  */
  /*    connections.  */
  /*  */
  /*    Note that W should be set to a matrix of size(L_out, 1 + L_in) as */
  /*    the column row of W handles the "bias" terms */
  /*  */
  /*  You need to return the following variables correctly  */
  /*  ====================== YOUR CODE HERE ====================== */
  /*  Instructions: Initialize W randomly so that we break the symmetry while */
  /*                training the neural network. */
  /*  */
  /*  Note: The first row of W corresponds to the parameters for the bias units */
  /*  */
  b_W = 1 + L_in;
  if (b_W > 32767) {
    b_W = 32767;
  }

  b_rand(L_out, (int16_T)b_W, W);
  b_W = W->size[0] * W->size[1];
  W->size[0] = W->size[0];
  W->size[1] = W->size[1];
  emxEnsureCapacity((emxArray__common *)W, b_W, (int32_T)sizeof(real_T));
  b_W = W->size[0];
  c_W = W->size[1];
  c_W *= b_W;
  for (b_W = 0; b_W < c_W; b_W++) {
    W->data[b_W] = W->data[b_W] * 2.0 * 0.12 - 0.12;
  }

  /*  ========================================================================= */
}

/* End of code generation (randInitializeWeights.c) */
