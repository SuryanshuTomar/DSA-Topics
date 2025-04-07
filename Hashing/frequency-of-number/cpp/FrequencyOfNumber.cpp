// https://www.geeksforgeeks.org/find-frequency-number-array/

#include "../../helper-functions/PrintArrCpp.h"
#include <iostream>
#include <vector>

using namespace std;

void findFrequencyNumber(vector<int> &freqArr, int size, int queries) {
  cout << "No. of queries you can ask : " << queries << endl;
  for (int i = 0; i < queries; i++) {
    int query;
    cout << "Query " << i + 1 << " -> ";
    cin >> query;
    cout << "Result : " << freqArr[query] << endl;
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

  // Note:
  //  1. We can only declare 10^6 size of int array inside main and 10^7 size of
  //  int array outside of the main.
  //  2. For bool array it is 10^7 size inside main and 10^8 size outside of
  //  main.
  // 3. We cannot hash content using array if the size of input increase from
  // 10^7. So, We have to hash the data using other method which is hashing
  // using hashmaps.

  // precompute
  // If the problem statement states that the size of the array will be 10^5
  // then we will take the size of the hash array to 10^5 + 1.
  // like this -> int hash[100001]

  // precompute
  // If the problem statement states that the size of the array will be 10^5
  // then we will take the size of the hash array to 10^5 + 1.
  // like this -> int hash[100001];
  calculateFreqArr(arr, freqArr, size);

  printVector(freqArr);

  findFrequencyNumber(freqArr, size, queries);
  return 0;
}

// Time Complexity : O(n + q), where n is the size of the array and the q is the
// number of queries
//  Space Complexity : (n), n is the size of the extra space
// taken by the frequency array. Also, the size of the frequency array depends
// on the max number present in the input array.