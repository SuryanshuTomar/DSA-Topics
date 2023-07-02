#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void calculateFrequency(vector<int> &arr, unordered_map<int, int> &freqMap,
                        int size) {
  for (int i = 0; i < size; i++) {
    if (freqMap.find(arr[i]) == freqMap.end()) {
      freqMap[arr[i]] = 1;
    } else {
      freqMap[arr[i]]++;
    }
  }
}

void findFrequency(unordered_map<int, int> &freqMap, int queries) {
  for (int i = 0; i < queries; i++) {
    int queryNumber;
    cin >> queryNumber;
    cout << "Frequency for : " << queryNumber << " is " << freqMap[queryNumber]
         << endl;
  }
}

int main() {
  unordered_map<int, int> freqMap;
  vector<int> arr{1, 2, 2, 4, 5, 5, 5, 5, 6, 7, 7, 8, 9};
  int size = arr.size();

  calculateFrequency(arr, freqMap, size);
  findFrequency(freqMap, 3);

  return 0;
}