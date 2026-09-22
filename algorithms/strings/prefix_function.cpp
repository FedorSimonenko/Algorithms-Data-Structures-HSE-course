#include <vector>
#include <string>

std::vector<int> prefix_function(std::string P) {
    std::vector pi(P.length(), 0);
    for (int i = 1; i < P.length(); i++) {
        int j = pi[i - 1];
        while (j > 0 && P[i] != P[j]) j = pi[j - 1];
        if (P[i] == P[j]) ++j;
        pi[i] = j;
    }
    return pi;
}