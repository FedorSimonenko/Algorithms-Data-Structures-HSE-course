#include "strings/KnuthMorrisPratt.h"
#include <vector>
#include <iostream>
#include <string>

int main() {
    std::string T  = "ABABABCAABABCABABABC";
    std::string P = "ABABABC";
    std::vector<int> ans = KnuthMorrisPratt(T, P);
    for (int x : ans) std::cout << x << " ";
}