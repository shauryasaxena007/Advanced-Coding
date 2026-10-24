
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(int a[], int n) {
    int maxVal = *max_element(a, a + n);

    vector<int> count(maxVal + 1, 0);

    for (int i = 0; i < n; i++)
        count[a[i]]++;

    int j = 0;

    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            a[j++] = i;
            count[i]--;
        }
    }
}

int main() {
    int a[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    countingSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
//counting sort algorithm