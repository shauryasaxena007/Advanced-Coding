#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    int candidate = 0;
    int count = 0;

    for (int x : arr) {

        if (count == 0)
            candidate = x;

        if (x == candidate)
            count++;
        else
            count--;
    }

    cout << "Majority Element = " << candidate;

    return 0;
}
//Boyer-Moore Voting Algorithm 
//majority Element is the element that appears more than n/2 times in the array. In this case, the majority element is 2, as it appears 4 times in the array of size 7.