#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 20> arr = {2, 80, 1, 8, 3, 5, 7, 9, 4, 6, 10, 42, 94, 11, 13, 15, 97, 79, 16, 98};
    // c style searching
    int searchValue = 42;
    for(int i=0;i<20;i++){
        if(arr[i] == searchValue){
            std::cout << "Found value " << searchValue << " at index " << i << std::endl;
            break;
        }
    }

    // c++ style searching
    auto it = std::find(arr.begin(),arr.end(),searchValue);
    if(it != arr.end()){
        std::cout<< "Found value " << searchValue << " at index " << std::distance(arr.begin(),it) << std::endl;
    }
    return 0;
}