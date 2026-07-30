#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxPeople(int n, vector<int>& W, int Y) {
    sort(W.begin(), W.end());
     
    int count =0;
    int sum = 0;

    for(int i=0;i<n;i++){
        if(sum + W[i] <= Y){
        sum += W[i];
            count++;
        }else{
            break;
        }
    }
    return count;
}

int main() {
    int n = 5;
    vector<int> W = {50, 30, 20, 10, 40};
    int Y = 100;

    cout << "Maximum number of people that can be accommodated: " << maxPeople(n, W, Y) << endl;
    return 0;
}