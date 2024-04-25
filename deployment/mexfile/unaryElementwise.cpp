//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// unaryElementwise.cpp
//
// Code generation for function 'unaryElementwise'
//

// Include files
#include "unaryElementwise.h"
#include "evaluatePolicy_data.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <xmmintrin.h>

// Function Declarations
static void elementwise_relu(const emlrtStack &sp, const real32_T &inputTensor,
                             real32_T &outputTensor);

// Function Definitions
static void elementwise_relu(const emlrtStack &sp, const real32_T &inputTensor,
                             real32_T &outputTensor)
{
  __m128 reg_0;
  __m128 reluZero;
  emlrtStack st;
  int32_T baseIdx;
  int32_T elementwise_relu_numThreads;
  int32_T simdBlockIdx;
  boolean_T emlrtHadParallelError{false};
  reluZero = _mm_set1_ps(0.0F);
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  elementwise_relu_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(elementwise_relu_numThreads) private(         \
    st, baseIdx, reg_0) firstprivate(emlrtHadParallelError)
  {
    try {

      st.prev = &sp;
      st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
      st.site = nullptr;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (simdBlockIdx = 0; simdBlockIdx < 64; simdBlockIdx++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        baseIdx = simdBlockIdx << 2;
        reg_0 = _mm_loadu_ps(&(&inputTensor)[baseIdx]);
        reg_0 = _mm_max_ps(reg_0, reluZero);
        _mm_storeu_ps(&(&outputTensor)[baseIdx], reg_0);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
}

namespace coder {
namespace internal {
namespace layer {
namespace optimized {
void unaryElementwise(const emlrtStack &sp, real32_T X[256], real32_T Z[256])
{
  elementwise_relu(sp, X[0], Z[0]);
}

} // namespace optimized
} // namespace layer
} // namespace internal
} // namespace coder

// End of code generation (unaryElementwise.cpp)
