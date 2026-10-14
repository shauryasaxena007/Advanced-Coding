
#include <iostream>
using namespace std;

int mySqrt(int n) {
    int low = 0;
    int high = n;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid <= n / mid && mid != 0) {
            ans = mid;
            low = mid + 1;
        } else if (mid == 0) {
            ans = 0;
            break;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n = 10;

    cout << "Square Root: " << mySqrt(n);

    return 0;
}
//square root of a number