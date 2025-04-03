// Question :- You are given an array of size “n”.
// Also, you are also given “Q” queries for each of the query
// Please find how many times a given number in the query occurs in the array.

#include <iostream>
#include <vector>
using namespace std;

// inputArraySize = N;
// querySize = Q;
// Time Complexity - O(N * Q)
// Space Complexity - O(1) - Since, no extra space is used.
// Note: Space taken in the input does not count in the space complexity
// calculation.
void findElementIndexBruteForce(vector<int> inputArray, int queryCount) {
  cout << "Enter the Query Element to find in the array : " << endl;
  for (int i = 0; i < queryCount; i++) {
    int queryElement;
    int answer = 0;
    cin >> queryElement;
    for (int j = 0; j < inputArray.size(); j++) {
      if (inputArray[j] == queryElement)
        answer++;
    }
    cout << queryElement << " occures " << answer << " times." << endl;
  }
}

int findElementIndexOptimized(vector<int> inputArray, int queryCount) {
  
  for(int i = 0; i < inputArray.size(); i++){

  }
}

int main() {
  // int arraySize = 10;
  // vector<int> inputArray(arraySize);
  vector<int> inputArray = {1, 1, 2, 3, 4, 5, 5, 5, 5, 6, 6, 7, 9, 9, 9};

  int queryCount;

  // cout << "Enter the Array size : " << endl;
  // cin >> arraySize;

  // cout << "Enter the Array Elements : " << endl;
  // for (int i = 0; i < arraySize; i++) {
  //   cin >> inputArray[i];
  // }

  cout << "Enter the Query count : " << endl;
  cin >> queryCount;

  // Approach 1 - Brute Force Approach - Finding in the array each time for each
  // query.
  findElementIndexBruteForce(inputArray, queryCount);

  return 0;
}