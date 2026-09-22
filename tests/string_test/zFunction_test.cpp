#include "strings/zFunction.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string str = "abacaba";
    std::vector z = zFunction(str);
    for (auto x : z) {
        std::cout << x << " ";
    }
}