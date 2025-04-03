// => Selection Sort - Iterate the array, and in every iteration find the
// shortest element in the array and put it in its correct position. Then in the
// next iteration, iterate the array from 2nd element as first element is
// already in its correct position. Now, repeat the process until n-1 size of
// the array.

#include <iostream>
#include <vector>
#include "../helpers/printVector.h"



int main() {
  std::vector<int> arr = {10, 8, 2, 3, 1, 5};
  printVector(arr);
  return 0;
}