#include <vector>
#include <string>
#include <algorithm>

std::vector<int> zFunction(std::string T) {
    std::vector <int> z_fun_arr(T.length(), 0);
    int n = T.length();
    int left = 0;
    int right = 0;
    for (int i = 1; i < n; i++) {
        z_fun_arr[i] = std::max(0, std::min(right - i, z_fun_arr[i - left]));
        while (i + z_fun_arr[i] < n && T[z_fun_arr[i]] == T[i + z_fun_arr[i]]) z_fun_arr[i]++;
        if (i + z_fun_arr[i] > right) {
            left = i;
            right = i + z_fun_arr[i];
        }
    }
    return z_fun_arr;
}