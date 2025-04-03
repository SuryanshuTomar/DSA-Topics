#include <iostream>
#include <vector>

// Approach 3. Using two pointer approach.
// TC - O(n/2) -> O(n), where n is the time take by the input array to traverse.
// SC - O(1), since no extra space is taken

void reverseInGroups(std::vector<long long int>& arr, int k) {
    // code here

    for (long long int i = 0; i < k; i++) {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }

    for (long long int i = k; i < arr.size(); i++) {
        int temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i + k];

        
        arr[arr.size() - 1 - i + k] = temp;
    }


    std::cout << "Reverse Array : " << std::endl;
    std::cout << "{ ";
    for (long long int i = 0; i < arr.size(); i++) {
        std::cout << arr[i];
        if (i < arr.size() - 1) {
            std::cout << ", ";
        }
    }
}

int main() {
    std::vector<long long int> inputVector = { 10, 8, 30, 4, 5, 17, 15 };
    int splitIndex = 3;

    reverseInGroups(inputVector, splitIndex);

    std::cout << " }";


}