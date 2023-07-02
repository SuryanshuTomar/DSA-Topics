// https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> indexMap;
  int size = nums.size();

  for (int i = 0; i < size; i++) {

    // Calculate the remaining sum from the target sum
    int remaining = target - nums[i];

    if (indexMap.find(remaining) != indexMap.end()) {
      return {indexMap[remaining], i};
    }

    // if the remaining number is not present int the indexMap then, it means
    // that the target sum is not found yet. Then push the current element and
    // its index in the indexMap
    indexMap[nums[i]] = i;
  }

  return {-1, -1};
}

int main() {
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;

  twoSum(arr, target);
  return 0;
}

// Time Complexity: O(n), where n is the size of the array, as it is possible that we may not find the target sum in the input array and have to traverse through the whole array.
// Space Complexity: O(n) (extra space in map), where n is the number of unique elements present in the array which will be stored in the indexMap.