#include<iostream>
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 0;
    else
        return (josephus(n - 1, k) + k) % n;
}

int main() {
    int n = 5, k = 3;  // Example values, replace with actual input if needed
   
    // The position returned by josephus function is 0-indexed, so we add 1 to convert it to 1-indexed.
    cout << josephus(n, k) + 1 << endl;

    return 0;
}