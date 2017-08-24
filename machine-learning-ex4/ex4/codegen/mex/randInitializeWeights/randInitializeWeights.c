/*
 * randInitializeWeights.c
 *
 * Code generation for function 'randInitializeWeights'
 *
 * C source code generated on: Thu Sep 17 23:30:38 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "randInitializeWeights.h"
#include "randInitializeWeights_emxutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 22, "randInitializeWeights",
  "J:/\xe8\xbf\x85\xe9\x9b\xb7\xe4\xb8\x8b\xe8\xbd\xbd/machine-learning-ex1/machine-learning-ex4/ex4/randInitializeWeights.m"
};

static emlrtRSInfo b_emlrtRSI = { 79, "rand",
  "I:/MATLAB/R2012b/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtMCInfo emlrtMCI = { 79, 9, "rand",
  "I:/MATLAB/R2012b/toolbox/eml/lib/matlab/randfun/rand.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 14, "randInitializeWeights",
  "J:/\xe8\xbf\x85\xe9\x9b\xb7\xe4\xb8\x8b\xe8\xbd\xbd/machine-learning-ex1/machine-learning-ex4/ex4/randInitializeWeights.m"
};

static emlrtDCInfo emlrtDCI = { 13, 11, "randInitializeWeights",
  "J:/\xe8\xbf\x85\xe9\x9b\xb7\xe4\xb8\x8b\xe8\xbd\xbd/machine-learning-ex1/machine-learning-ex4/ex4/randInitializeWeights.m",
  4 };

static emlrtDCInfo b_emlrtDCI = { 13, 18, "randInitializeWeights",
  "J:/\xe8\xbf\x85\xe9\x9b\xb7\xe4\xb8\x8b\xe8\xbd\xbd/machine-learning-ex1/machine-learning-ex4/ex4/randInitializeWeights.m",
  4 };

/* Function Declarations */
static int16_T _s16_s32_(int32_T b);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  emxArray_real_T *y);

/* Function Definitions */
static int16_T _s16_s32_(int32_T b)
{
  int16_T a;
  a = (int16_T)b;
  if (a != b) {
    emlrtIntegerOverflowErrorR2012b(0, emlrtRootTLSGlobal);
  }

  return a;
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m2;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m2, 2, pArrays, "rand",
    TRUE, location);
}

static void e_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv1[2];
  boolean_T bv0[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    iv1[i] = -1;
    bv0[i] = TRUE;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv1, bv0, ret->size);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = ret->size[0];
  ret->size[1] = ret->size[1];
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

/*
 * function W = randInitializeWeights(L_in, L_out)
 */
void randInitializeWeights(int16_T L_in, int16_T L_out, emxArray_real_T *W)
{
  int16_T i0;
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
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
  /* 'randInitializeWeights:13' W = zeros(L_out, 1 + L_in); */
  emlrtNonNegativeCheckFastR2012b((real_T)L_out, &emlrtDCI, emlrtRootTLSGlobal);
  i0 = _s16_s32_(1 + L_in);
  emlrtNonNegativeCheckFastR2012b((real_T)i0, &b_emlrtDCI, emlrtRootTLSGlobal);

  /*  ====================== YOUR CODE HERE ====================== */
  /*  Instructions: Initialize W randomly so that we break the symmetry while */
  /*                training the neural network. */
  /*  */
  /*  Note: The first row of W corresponds to the parameters for the bias units */
  /*  */
  /* 'randInitializeWeights:21' epsilon_init=0.12; */
  /* 'randInitializeWeights:22' W=rand(L_out, 1 + L_in)*2*epsilon_init-epsilon_init; */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m0) = L_out;
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m0) = _s16_s32_(1 + L_in);
  emlrtAssign(&b_y, m0);
  emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand", W);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  b_W = W->size[0] * W->size[1];
  W->size[0] = W->size[0];
  W->size[1] = W->size[1];
  emxEnsureCapacity((emxArray__common *)W, b_W, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  b_W = W->size[0];
  c_W = W->size[1];
  c_W *= b_W;
  for (b_W = 0; b_W < c_W; b_W++) {
    W->data[b_W] = W->data[b_W] * 2.0 * 0.12 - 0.12;
  }

  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);

  /*  ========================================================================= */
}

/* End of code generation (randInitializeWeights.c) */
