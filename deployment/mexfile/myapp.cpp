#include "evaluatePolicy.h"
#include "evaluatePolicy_terminate.h"
#include <mex.h>

int main()
{
  double observation[4];
  observation[0] = 8.2;
  observation[1] = 2.0;
  observation[2] = 18.2;
  observation[3] = 9.1;

  //   Evaluate
  double action;
  action = evaluatePolicy(observation);
}