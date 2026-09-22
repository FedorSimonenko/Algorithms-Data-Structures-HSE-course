#include <vector>
#include "prefix_function.h"
#include <string>

std::vector<int> KnuthMorrisPratt(std::string T, std::string P) {
    std::vector<int> pi = prefix_function(P);
    std::vector<int> index_str;
    int i = 0;
    int j = 0;
    for(int i = 0; i < T.length(); i++) {
        while(j > 0 && T[i] != P[j]) j = pi[j - 1];
        if (T[i] == P[j]) j++;
        if (j == P.length()) {
            index_str.push_back(i - j + 1);
            j = pi[j - 1];
        }
    }
    return index_str;
}