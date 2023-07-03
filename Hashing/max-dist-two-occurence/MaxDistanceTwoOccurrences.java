// https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/

import java.util.HashMap;

public class MaxDistanceTwoOccurrences {
  public static void main(String[] args) {
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 5};
    int result = maxDistanceBetweenTwoOccurrences(arr, arr.length);
    System.out.println("Max distance between two occ : " + result);
  }

  static int maxDistanceBetweenTwoOccurrences(int arr[], int size) {
  // This map will store the first occurrence of each element in the arr.
  HashMap<Integer, Integer> firstOccMap = new HashMap<Integer, Integer>();

  int maxDistance = Integer.MIN_VALUE;

  // Now Iterate over the array
  for (int i = 0; i < size; i++) {
    // check if the current element is already present in the firstOccMap or not
    // if the current element is not present in the firstOccMap
    // then add the first occurence of the current element to the map
    if (!firstOccMap.containsKey(arr[i])) {
      firstOccMap.put(arr[i], i);
    }
    // if the current element is already present then calculate the maxDistance
    // and store it.
    else {
      maxDistance = Integer.max(maxDistance, i - firstOccMap.get(arr[i]));
    }
  }

  return maxDistance;
}

}