#include <iostream>
#include <vector>

// Approach 3. Using two pointer approach.
// TC - O(n/2) -> O(n), where n is the time take by the input array to traverse.
// SC - O(1), since no extra space is taken

void reverse(std::vector<int>& arr) {
    // Your code here
    for(int i = 0; i < arr.size() - 1; i++){
        int temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
    
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