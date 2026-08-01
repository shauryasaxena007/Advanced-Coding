#include<iostream>
#include<vector>
#include <limits.h>

using namespace std;

int maxProductSubset(vector<int>&arr){
    int n = arr.size();
   
    
    if(n == 1) return arr[0];

    int max_neg = INT_MIN;
    int count_neg = 0, count_zero = 0;
    int product = 1;

    for(int x: arr){
        if(x == 0){
            count_zero++;
            continue;
        }
        if(x < 0){
            count_neg++;
            max_neg = max(max_neg, x);
        }
        product *= x;
    }

    if(count_zero == n) return 0;

    if(count_neg % 2 == 0) {
        if(count_neg ==1 && count_zero + count_neg == n) 
        return 0;
       
    }
    return product;
}
int main() {
    vector<int> arr = {-1, -1, 2, 3, 4};
    cout << "Maximum product subset: " << maxProductSubset(arr) << endl;
    return 0;
}