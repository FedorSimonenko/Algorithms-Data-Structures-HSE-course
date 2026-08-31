#include <vector>

bool binarySearch(std::vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int mid = high / 2;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (k == arr[mid]) return true;
            else if (k > arr[mid]) low = mid + 1;
            else if (k < arr[mid]) high = mid - 1;
        }
        return false;
    }