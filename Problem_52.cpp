#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int currentSum = arr[0];
    int maxSum = arr[0];

    for(int i=1; i<arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << "Maximum Sum = " << maxSum;
    return 0;
}
//Kadane's Algorithm
// Output: Maximum Sum from the contiguous subarray is 6 (from subarray [4, -1, 2, 1])