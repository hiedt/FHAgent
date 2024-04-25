//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// addBiasApplyActivation.cpp
//
// Code generation for function 'addBiasApplyActivation'
//

// Include files
#include "addBiasApplyActivation.h"
#include "rt_nonfinite.h"
#include "omp.h"

// Function Definitions
namespace coder {
namespace internal {
namespace layer {
void addBiasApplyActivation(const emlrtStack &sp, real32_T X[256],
                            const real32_T bias[256])
{
  int32_T addBiasApplyActivation_numThreads;
  int32_T iElem;
  boolean_T emlrtHadParallelError{false};
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  addBiasApplyActivation_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(addBiasApplyActivation_numThreads)            \
    firstprivate(emlrtHadParallelError)
  {
    try {

      emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (iElem = 0; iElem < 256; iElem++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        X[iElem] += bias[iElem];
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
}

void addBiasApplyActivation(real32_T &X)
{
  X -= 0.223507911F;
}

} // namespace layer
} // namespace internal
} // namespace coder

// End of code generation (addBiasApplyActivation.cpp)
