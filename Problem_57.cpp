#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4};

    int n = arr.size();

    vector<int> left(n, 1);
    vector<int> right(n, 1);
    vector<int> ans(n);

    // Left products
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }

    // Right products
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    // Final answer
    for (int i = 0; i < n; i++) {
        ans[i] = left[i] * right[i];
    }

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}