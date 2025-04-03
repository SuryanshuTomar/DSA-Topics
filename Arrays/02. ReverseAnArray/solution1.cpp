#include <iostream>
#include <vector>

// Approach 1. Creating a new array to store the reverse array and then assigning the reverse array to the original array.
// TC - O(n), where n is the time take by the input array to traverse.
// SC - O(n), where n is the size of the reverse array that we have created.

void reverse(std::vector<int>& arr) {
    // Your code here
    std::vector<int> reverseArray(arr.size());

    for(int i = arr.size() - 1; i > -1; i--){
        reverseArray[arr.size() - 1 - i] = arr[i];
    }
    arr = reverseArray;
    
}

int main() {
    std::vector<int> inputVector = {10, 8, 30, 4, 5};

    reverse(inputVector);
    
    std::cout << "Reverse Array : " << std::endl;
    std::cout << "{ ";
    for(int i = 0; i < inputVector.size(); i++){
        std::cout << inputVector[i];
        if(i < inputVector.size() - 1){
            std::cout << ", ";
        }
    }
    std::cout << " }";


}