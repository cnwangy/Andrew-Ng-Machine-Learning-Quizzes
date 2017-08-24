/*
 * randInitializeWeights_api.c
 *
 * Code generation for function 'randInitializeWeights_api'
 *
 * C source code generated on: Thu Sep 17 23:30:38 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "randInitializeWeights.h"
#include "randInitializeWeights_api.h"
#include "randInitializeWeights_emxutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "randInitializeWeights_api", "" };

/* Function Declarations */
static int16_T c_emlrt_marshallIn(const mxArray *L_in, const char_T *identifier);
static int16_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static int16_T f_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);

/* Function Definitions */
static int16_T c_emlrt_marshallIn(const mxArray *L_in, const char_T *identifier)
{
  int16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(L_in), &thisId);
  emlrtDestroyArray(&L_in);
  return y;
}

static int16_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  int16_T y;
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 0, 0 };

  const mxArray *m1;
  y = NULL;
  m1 = mxCreateNumericArray(2, (int32_T *)&iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  mxSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static int16_T f_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  int16_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "int16", FALSE, 0U, 0);
  ret = *(int16_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void randInitializeWeights_api(const mxArray * const prhs[2], const mxArray
  *plhs[1])
{
  emxArray_real_T *W;
  int16_T L_in;
  int16_T L_out;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&W, 2, &b_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  L_in = c_emlrt_marshallIn(emlrtAliasP(prhs[0]), "L_in");
  L_out = c_emlrt_marshallIn(emlrtAliasP(prhs[1]), "L_out");

  /* Invoke the target function */
  randInitializeWeights(L_in, L_out, W);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(W);
  W->canFreeData = FALSE;
  emxFree_real_T(&W);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (randInitializeWeights_api.c) */
