#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int root = sqrt(num + 1);

    if (root * root == (num + 1))
        cout << num << " is a Sunny Number.";
    else
        cout << num << " is not a Sunny Number.";

    return 0;
}