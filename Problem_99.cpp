
#include <iostream>
#include <vector>
using namespace std;

void combinationSum(vector<int>& arr, int index,
                    int target, vector<int>& current) {

    if (target == 0) {
        for (int x : current) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    if (index == arr.size() || target < 0) {
        return;
    }

    // Include current element
    current.push_back(arr[index]);

    combinationSum(arr, index, target - arr[index],
                   current);

    // Backtracking
    current.pop_back();

    // Exclude current element
    combinationSum(arr, index + 1, target,
                   current);
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    vector<int> current;

    int target = 7;

    combinationSum(arr, 0, target, current);

    return 0;
}
//combination sum using recursion