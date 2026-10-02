#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(vector<int>& arr) {

    int curr = arr[0];
    int maxi = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        curr = max(arr[i], curr + arr[i]);
        maxi = max(maxi, curr);
    }

    return maxi;
}

int main() {

    vector<int> arr = {5, -3, 5};

    int normal = kadane(arr);

    int total = 0;

    for(int x : arr)
        total += x;

    // Invert signs
    for(int i = 0; i < arr.size(); i++)
        arr[i] = -arr[i];

    int circular = total + kadane(arr);

    int answer = max(normal, circular);

    cout << "Maximum Circular Sum = " << answer;

    return 0;
}