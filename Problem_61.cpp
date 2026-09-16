#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 9;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum = sum + arr[j];

            if(sum == target) {
                cout << "Subarray found";
                return 0;
            }
        }
    }

    cout << "Subarray not found";

    return 0;
}