// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &nums) {
  int start = 0;
  int end = nums.size() - 1;
  int mid;
  int min = nums[0];

  while (start <= end) {
    mid = start + (end - start) / 2;

    // When the nums array is sorted on the left side.
    if (nums[mid] >= nums[0]) {
      start = mid + 1;
    }
    // When the nums array is sorted on the right side.
    else {
      min = nums[mid];
      end = mid - 1;
    }
  }
  return min;
}

int main() {
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

  cout << "Minimum Element: " << findMin(arr) << endl;
}

// TC - O(logn)
// SC - O(1)