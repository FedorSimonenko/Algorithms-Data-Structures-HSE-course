#include "sorting/bubbleSort.h"
#include <iostream>

int main() {
    std::vector<int> arr = {5,3,8,1};
    bubbleSort(arr);
    for (int x : arr) std::cout << x << " ";
}