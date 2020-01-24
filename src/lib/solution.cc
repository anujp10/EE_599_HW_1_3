#include "solution.h"
#include <iostream>
int Solution::FindMedian(std::vector<int> &inputs) {
  int median = 0;
  if (inputs.size() == 0) {
    return -1;
  }
  
  if (inputs.size() % 2)
    median = inputs[(inputs.size() / 2)];
  else
    median = (inputs[(inputs.size() / 2)] + inputs[(inputs.size() / 2) - 1]) / 2;

  return median;
}