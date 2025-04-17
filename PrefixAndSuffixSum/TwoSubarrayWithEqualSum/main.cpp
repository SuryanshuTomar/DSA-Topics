#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr) {
  cout << "Array : { ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
  cout << "}" << endl;
}

int main() {
  bool isEqualSumArray = false;
  int inputArrSize;
  cin >> inputArrSize;

  vector<int> inputArr(inputArrSize);
  vector<int> prefixSumArr(inputArrSize);

  // taking input
  for (int i = 0; i < inputArrSize; i++) {
    cin >> inputArr[i];
  }

  // Prefix sum of the array -
  // prefixSumArr[0] = inputArr[0];
  // for (int i = 1; i < inputArrSize; i++) {
  //   prefixSumArr[i] = prefixSumArr[i - 1] + inputArr[i];
  // }
  // printArray(prefixSumArr);

  int arrTotal = 0;
  for (int i = 1; i < inputArrSize; i++) {
    arrTotal += inputArr[i];
  }

  // Finding two subarray with equal sum
  for (int i = 0; i < inputArrSize - 1; i++) {
    int firstSubarrSum = prefixSumArr[i];
    int secondSubarrSum = prefixSumArr[inputArrSize - 1] - firstSubarrSum;
    if (firstSubarrSum == secondSubarrSum)
      isEqualSumArray = true;
  }

  cout << "Are 2 subarray with equal sum possible ? : " << isEqualSumArray
       << endl;

  return 0;
}

// Time Complexity - O(n)
// Space Complexity- O(1)
