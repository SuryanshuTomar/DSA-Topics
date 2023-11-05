// https://leetcode.com/problems/search-in-rotated-sorted-array

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target) {
  int start = 0;
  int end = nums.size() - 1;
  int mid;

  while (start <= end) {
    mid = start + (end - start) / 2;

    // if we found the target
    if (nums[mid] == target) {
      return mid;
    }
    // when the left side of the mid is sorted
    else if (nums[mid] >= nums[0]) {
      // check if the target value exists on the left side.
      if (nums[mid] > target && nums[start] <= target) {
        end = mid - 1;
      }
      // else the target exists on the right side of the mid
      else {
        start = mid + 1;
      }
    }
    // when the right side of the mid is sorted
    else {
      // check if the target value exists on the right side.
      if (nums[mid] < target && nums[end] >= target) {
        start = mid + 1;
      }
      // else the target exists on the left side of the mid
      else {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
  int target = 0;

  cout << "Target index : " << search(arr, target) << endl;
}

// TC - O(logn)
// SC - O(1)