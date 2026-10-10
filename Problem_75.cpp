#include <iostream>
using namespace std;

int upperBound(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}
int main() {

    int arr[] = {1, 2, 2, 2, 4, 5, 7};

    cout << upperBound(arr, 7, 2);

    return 0;
}