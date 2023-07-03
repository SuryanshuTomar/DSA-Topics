// https://www.geeksforgeeks.org/find-frequency-number-array/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class FrequencyOfNumber {
   public static void main(String[] args) throws IOException {
      InputStreamReader input = new InputStreamReader(System.in);
      BufferedReader reader = new BufferedReader(input);

      int arr[] = { 1, 2, 2, 4, 5, 5, 5, 5, 6, 7, 7, 8, 9 };
      int size = arr.length;
      findFrequencyOfNumber(arr, size, 3, reader);
   }

   static void findFrequencyOfNumber(int[] arr, int size, int queries, BufferedReader reader) throws IOException {
      // Create frequency array
      int freqArr[] = new int[100];
      for (int i = 0; i < size; i++) {
         freqArr[arr[i]]++;
      }

      // get the number of frequecies
      System.out.println("Enter " + queries + " frequecies :");
      for (int i = 0; i < queries; i++) {
         int queryNumber = Integer.parseInt(reader.readLine());
         System.out.println("Frequency for : " + queryNumber + " is " + freqArr[queryNumber]);
      }

   }
}

// Time Complexity : O(n + q), where n is the size of the array and the q is the
// number of queries
// Space Complexity : (n), n is the size of the extra space taken by the
// frequency array. Also, the size of the frequency array depends on the max
// number present in the input array.