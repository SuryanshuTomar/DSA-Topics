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
