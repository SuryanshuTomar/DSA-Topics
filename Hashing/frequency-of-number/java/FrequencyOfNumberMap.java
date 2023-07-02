import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;

public class FrequencyOfNumberMap  {
   public static void main(String[] args) throws IOException  {
      InputStreamReader inputStream = new InputStreamReader(System.in);
      BufferedReader reader = new BufferedReader(inputStream);

      HashMap<Integer, Integer> freqMap = new HashMap<Integer, Integer>();
      int arr [] = {1, 2, 2, 4, 5, 5, 5, 5, 6, 7, 7, 8, 9};
      int size = arr.length;

      calculateFrequency(arr, freqMap, size);
      findFrequency(freqMap, 3, reader);
   }

   static void calculateFrequency(int arr [], HashMap<Integer, Integer> freqMap, int size) {
      for(int i = 0; i < size; i++) {
         if(freqMap.containsKey(arr[i])) {
            freqMap.put(arr[i], freqMap.get(arr[i]) + 1);
         } else {
            freqMap.put(arr[i], 1);
         }
      }
   }

   static void findFrequency(HashMap<Integer, Integer> freqMap, int queries, BufferedReader reader) throws IOException {
       for(int i = 0; i < queries; i++){
         int queryNumber = Integer.parseInt(reader.readLine());
         System.out.println("Frequency for : " + queryNumber + " is " + freqMap.get(queryNumber));
      }
   }
   
}


// Time Complexity: O(n + q), where n is the size of the array and q is the number of queries asked\
// Space Complexity: (n), where n is number of unique elements that were stored into the HashMap.