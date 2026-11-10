
#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& arr, int index) {

    if (index == arr.size()) {
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    for (int i = index; i < arr.size(); i++) {

        // Swap
        swap(arr[index], arr[i]);

        // Recursive call
        permute(arr, index + 1);

        // Backtracking
        swap(arr[index], arr[i]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3};

    permute(arr, 0);

    return 0;
}
//permutation generation using recursion