#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &arr) {
  cout << "Array : { ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
  cout << "}" << endl;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
  printVector(arr);
  return 0;
}