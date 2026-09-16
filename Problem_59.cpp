#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};

    int n = 4;
    int m = 4;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(A[i] == B[j]) {
                cout << A[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//intersection of two arrays