#include "strings/prefix_function.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string P = "aabaabaaa";
    std::vector<int> pref_arr = prefix_function(P);
    for (int x : pref_arr) std::cout << x << " ";
}