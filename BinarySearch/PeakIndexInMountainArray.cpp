// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr) {
  int start = 0;
  int end = arr.size() - 1;
  int mid;

  while (start <= end) {
    mid = end + (start - end) / 2;

    // if we found the peak element
    if (arr[mid] > arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
      return mid;
    }
    // if the peak element is present on the right side
    else if (arr[mid] <= arr[mid + 1]) {
      start = mid + 1;
    }
    // if the peak element is present on the left side
    else {
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {0, 10, 5, 2};

  cout << "Peak Element Index : " << peakIndexInMountainArray(arr) << endl;
}

// TC - O(logn)
// SC - O(1)