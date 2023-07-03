// https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int maxDistanceBetweenTwoOccurrences(vector<int> &arr, int size) {
  // This map will store the first occurrence of each element in the arr.
  unordered_map<int, int> firstOccMap;

  int maxDistance = INT_MIN;

  // Now Iterate over the array
  for (int i = 0; i < size; i++) {
    // check if the current element is already present in the firstOccMap or not
    // if the current element is not present in the firstOccMap
    // then add the first occurence of the current element to the map
    if (firstOccMap.find(arr[i]) == firstOccMap.end()) {
      firstOccMap[arr[i]] = i;
    }
    // if the current element is already present then calculate the maxDistance
    // and store it.
    else {
      maxDistance = max(maxDistance, i - firstOccMap[arr[i]]);
    }
  }

  return maxDistance;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 5};
  int result = maxDistanceBetweenTwoOccurrences(arr, arr.size());
  cout << "Max distance between two occ : " << result << endl;

  return 0;
}

// TC - O(n), where n is the size of the array which we are traversing to find
// the maximum distance between two similar elements. SC - O(n), where n is the
// number of unique elements in the array which got stored into the firstOccMap.