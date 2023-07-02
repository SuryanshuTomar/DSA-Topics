// https://leetcode.com/problems/two-sum/description/

import java.util.HashMap;

public class TwoSum {
   public static void main(String[] args) {
      int arr[] = {2,7,11,15};
      int target = 9;

      twoSum(arr, target);
   }

    static public int[] twoSum(int nums[], int target) {
         HashMap<Integer, Integer> indexMap = new HashMap<Integer, Integer>();
         int size = nums.length;

         for(int i = 0; i < size; i++){

         // Calculate the remaining sum from the target sum
         int remaining = target - nums[i];

         if(indexMap.containsKey(remaining)){
            return new int[] {indexMap.get(remaining), i};
         }

         // if the remaining number is not present int the indexMap then, it means that the target sum is not found yet.
         // Then push the current element and its index in the indexMap
         indexMap.put(nums[i], i);
         }

        return new int[] {-1, -1};
    }
}

// Time Complexity: O(n), where n is the size of the array, as it is possible that we may not find the target sum in the input array and have to traverse through the whole array.
// Space Complexity: O(n) (extra space in map), where n is the number of unique elements present in the array which will be stored in the indexMap.