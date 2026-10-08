#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            ans = mid;
            low = mid + 1;      // right side search
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {1, 2, 2, 2, 4, 5, 7};

    cout << lastOccurrence(arr, 7, 2);

    return 0;
}
//last Occurence