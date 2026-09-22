#include "zFunction.h"
#include <vector>
#include <string>

std::vector<int> zFunctionSearch(std::string pattern, std::string string) {
    std::string common_string = pattern + "#" + string;
    std::vector<int> z = zFunction(common_string);
    std::vector<int> result;
    int m = pattern.length();
    int n = common_string.length();
    for (int i = m + 1; i < n; i++) {
        if (z[i] == m) result.push_back(i - m - 1);
    } 
    return result;
}