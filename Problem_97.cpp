
#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<int>& arr, int index,
             vector<int>& current) {

    if (index == arr.size()) {
        cout << "[ ";
        for (int x : current) {
            cout << x << " ";
        }
        cout << "]" << endl;
        return;
    }

    // Include current element
    current.push_back(arr[index]);
    subsets(arr, index + 1, current);

    // Backtrack
    current.pop_back();

    // Exclude current element
    subsets(arr, index + 1, current);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;

    subsets(arr, 0, current);

    return 0;
}
//subset generation using recursion