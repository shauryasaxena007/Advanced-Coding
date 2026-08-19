#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int square = n * n;
    int temp = n;

    bool isAutomorphic = true;

    while (temp > 0) {
        int tp = temp % 10;
        int sq = square % 10;
        if (tp!= sq) {
            isAutomorphic = false;
            break;
        }

        temp = temp/10;
        square = square/10;
    }

    if (isAutomorphic)
        cout << "Automorphic Number";
    else
        cout << "Not Automorphic Number";

    return 0;
}
//automorphic number