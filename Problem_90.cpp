
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (auto interval : arr) {

        if (ans.empty() ||
            ans.back()[1] < interval[0]) {

            ans.push_back(interval);
        }

        else {
            ans.back()[1] = max(
                ans.back()[1], interval[1]
            );
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> arr = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };

    vector<vector<int>> ans = mergeIntervals(arr);

    for (auto x : ans) {
        cout << "[" << x[0] << "," << x[1] << "] ";
    }
}
//merge intervals algorithm