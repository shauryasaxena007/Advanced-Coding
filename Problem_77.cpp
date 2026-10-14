
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    vector<int> arr = {1, 3, 5, 4, 2};

    int index = findPeakElement(arr);

    cout << "Peak Element: " << arr[index];

    return 0;
}
//find peak element