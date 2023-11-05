// https://leetcode.com/problems/kth-missing-positive-number

#include <iostream>
#include <vector>

using namespace std;

// Solution using Binary Search
int findKthPositive(vector<int> &arr, int k) {
  int start = 0;
  int end = arr.size() - 1;
  int ans = arr.size();
  int mid, missingNumbers;

  while (start <= end) {
    mid = start + (end - start) / 2;

    // missingNumbers -> this is storing the amount of numbers that
    // are missing till the mid index.
    missingNumbers = arr[mid] - mid - 1;
    if (missingNumbers >= k) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  // ans is the the index of the missing number and if we add the kth number
  // from the missing index, we will get our resultant answer that's why
  // ans + k
  return ans + k;
}

int main() {
  vector<int> missingNumbersArr = {2, 3, 4, 7, 11};
  int k = 5;

  cout << "Missing Number : " << findKthPositive(missingNumbersArr, k) << endl;
}

// TC - O(logn)
// SC - O(1)