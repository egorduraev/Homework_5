#include <iostream>
namespace allfunc {
void printArr(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout<<arr[i]<<" ";
    }
}
}
