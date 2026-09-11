#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8};
    int n = 4;

    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int diff = abs(arr[i] - arr[j]);

            if (diff < minDiff)
                minDiff = diff;
        }
    }

    cout << "Smallest Difference = " << minDiff;

    return 0;
}
// Output: Smallest Difference 