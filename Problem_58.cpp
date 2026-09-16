#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << "Duplicate: " << arr[i];
            }
        }
    }

    return 0;
}
//duplicate elements in an array