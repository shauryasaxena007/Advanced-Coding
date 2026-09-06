#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    int copyArr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copy elements
    for (int i = 0; i < n; i++) {
        copyArr[i] = arr[i];
    }

    cout << "Copied Array: ";

    for (int i = 0; i < n; i++) {
        cout << copyArr[i] << " ";
    }

    return 0;
}