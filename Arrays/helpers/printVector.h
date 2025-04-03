template <typename T>
void printVector(std::vector<T> arr){
    std::cout << "Vector : { ";

    for(T elem: arr){
        std::cout << elem << ", " ;
    }
    std::cout << " }";
};