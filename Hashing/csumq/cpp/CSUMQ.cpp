// https://www.spoj.com/problems/CSUMQ/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Take the n size of the array from input
  int size;
  cin >> size;

  // Note: taking the size as size + 1 for storing the prefixSum in 1-based
  // indexing format Create an arr of size n + 1
  vector<int> arr(size + 1);

  // Now create the prefix sum array
  // Note: taking the size as size + 1 for storing the prefixSum in 1-based
  // indexing format
  vector<int> prefixSum(size + 1, 0);
  for (int i = 1; i <= size; i++) {
    // Take the input in the array
   cin >> arr[i];
    // store the prefixSum in the array
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  // take the no. of queries from the input
  int queries;
  cin >> queries; 
  int left, right;
  // now return the result sum from each query
  for (int i = 0; i < queries; i++) {
    // Take the input of left and right for each query
    cin >> left;
    cin >> right;

    // calculate the result sum
    // prefixSum[right] = prefixSum[left - 1] + sum(left, right)
    // So, sum(left, right) = prefixSum[right] - prefixSum[left - 1]
    int sum = prefixSum[++right] - prefixSum[++left - 1];
    cout << sum << endl;
  }
  return 0;
}

// TC: O(n + q), where n is the size of the array as we have to traverse whole array for calculating the prefix sum + the total number of queries asked.
// SC : O(n), where n is the size of the prefix sum arr.