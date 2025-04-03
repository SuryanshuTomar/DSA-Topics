#include <iostream>
#include <vector>

// Approach 2. Using recursion and in every recursion using reversing the first half of index values with the second half value of the array.
// TC - O(n), where n is the time take by the input array to traverse.
// SC - O(n/2) -> O(n), where n is the size of the stack taken by the reverse recurstion function.

void reverse(std::vector<int>& arr, int startIdx, int endIdx) {
    // Your code here
    if(startIdx >= endIdx) return;

    int temp = arr[startIdx];
    arr[startIdx] = arr[endIdx];
    arr[endIdx] = temp;

    reverse(arr, startIdx + 1, endIdx - 1);
}

int main() {
    std::vector<int> inputVector = {10, 8, 30, 4, 5};

    reverse(inputVector, 0, inputVector.size() - 1);
    
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