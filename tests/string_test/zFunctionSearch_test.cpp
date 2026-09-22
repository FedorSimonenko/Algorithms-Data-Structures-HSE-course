#include "strings/zFunctionSearch.h"
#include <iostream>

int main() {
    std::string p = "aba";
    std::string s = "abacaba";
    std::vector<int> ans = zFunctionSearch(p, s);
    for (auto x : ans) {
        std::cout << x << " ";
    }
}