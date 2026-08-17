#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if (original % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not a Harshad Number";

    return 0;
}
// Harshad Number