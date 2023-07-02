// https://www.spoj.com/problems/CSUMQ/

import java.util.Scanner;

public class CSUMQ {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);

      // Take the n size of the array from input
      int size = sc.nextInt();
      
      // Note: taking the size as size + 1 for storing the prefixSum in 1-based indexing format
      // Create an arr of size n + 1
      int arr[] = new int[size + 1];
      
      // Now create the prefix sum array\
      // Note: taking the size as size + 1 for storing the prefixSum in 1-based indexing format
      int prefixSum[] = new int[size + 1];
      for(int i = 1; i <= size; i++){
         // Take the input in the array
         arr[i] = sc.nextInt();
         // store the prefixSum in the array
         prefixSum[i] = prefixSum[i - 1] + arr[i];
      }

      // take the no. of queries from the input
      int queries = sc.nextInt();
      int left, right;
      // now return the result sum from each query
      for(int i=0; i < queries; i++) {
         // Take the input of left and right for each query
         left = sc.nextInt();
         right = sc.nextInt();

         // calculate the result sum
         // prefixSum[right] = prefixSum[left - 1] + sum(left, right)
         // So, sum(left, right) = prefixSum[right] - prefixSum[left - 1]
         int sum = prefixSum[++right] - prefixSum[++left - 1];
         System.out.println(sum);
         System.out.println("\n");
      }
   }
}

// TC: O(n + q), where n is the size of the array as we have to traverse whole array for calculating the prefix sum + the total number of queries asked.
// SC : O(n), where n is the size of the prefix sum arr.