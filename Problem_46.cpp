#include <iostream>
using namespace std;

int main() {

    int arr1[] = {10, 20, 30};
    int arr2[] = {40, 50, 60};

    int n1 = 3;
    int n2 = 3;

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged Array: ";

    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}
// merge two arrays into a single array