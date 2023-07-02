// https://www.geeksforgeeks.org/find-frequency-number-array/

#include <iostream>
#include <vector>
#include "../../PrintArrCpp.h"
using namespace std;

void findFrequencyNumber(vector<int> &freqArr, int size, int queries) {
   cout << "No. of queries you can ask : " << queries << endl;   
   for(int i = 0; i < queries; i++){
      int query;
      cout << "Query " << i + 1 << " -> ";
      cin >>  query;
      cout <<  "Result : " << freqArr[query] << endl;
   }
}

void calculateFreqArr(vector<int> &arr, vector<int> &freqArr, int size) {
  for (int i = 0; i < size; i++) {
      freqArr[arr[i]]++;
  }
}

int main() {
  vector<int> arr = {1, 1, 1, 3, 4, 5, 7, 8, 9, 9, 9, 9, 2, 2};

  int queries = 3;
  int size = arr.size();

  vector<int> freqArr(100);

  cout << "Size of frequency arr : " << size << endl;
  calculateFreqArr(arr, freqArr, size);
  printVector(freqArr);
  findFrequencyNumber(freqArr, size, queries);
  return 0;
}

// Time Complexity : O(n + q), where n is the size of the array and the q is the number of queries
//  Space Complexity : (n), n is the size of the extra space
// taken by the frequency array. Also, the size of the frequency array depends
// on the max number present in the input array.