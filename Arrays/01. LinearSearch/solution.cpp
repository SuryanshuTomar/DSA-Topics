// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

#include <iostream>
#include <vector>


int search(std::vector<int>& arr, int x) {
    // Your code here
    int index = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == x) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    std::vector<int> inputVector = {10, 8, 30, 4, 5};
    int searchElement = 5;

    int elementIndex = search(inputVector, searchElement);
    std::cout << "Element : " << searchElement << " is at index : " << elementIndex << std::endl;
}