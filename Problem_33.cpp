#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
//number triangle