#include <iostream>
#include <string>

using namespace std;

int main() {
  string inputString;
  cin >> inputString;

  // precompute
  int hash[26] = {0};
  for (int i = 0; i < inputString.size(); i++) {
    hash[inputString[i] - 'a'] += 1;
  }

  int noOfQueries;
  cin >> noOfQueries;
  while (noOfQueries--) {
    char charachter;
    cin >> charachter;

    // fetch data from hash
    cout << hash[charachter - 'a'] << endl;
  }

  return 0;
}