#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 50, 20, 40, 30};
    int n = 5;

    int largest = arr[0];
    int secondLargest = arr[0];
    int thirdLargest = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        }
        else if (arr[i] > thirdLargest &&
                 arr[i] != secondLargest &&
                 arr[i] != largest) {
            thirdLargest = arr[i];
        }
    }

    cout << "Third Largest = " << thirdLargest;

    return 0;
}