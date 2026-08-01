#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int minSwap(vector<int>& A, vector<int> &B){
    int n = A.size();

    unordered_map<int,int> pos;
    for(int i=0;i<n;i++){
        pos[B[i]] = i;
    }

    vector<bool> visited(n,false);
    int swaps = 0;

    for(int i=0;i<n;i++){
        if(visited[i] || pos[A[i]] == i){
            continue;
        }

        int cycle_size = 0;
        int j = i;

        while(!visited[j]){
            visited[j] = true;
            j = pos[A[j]];
            cycle_size++;
        }

        if(cycle_size > 0){
            swaps += (cycle_size - 1);
        }
    }
    return swaps;
}

int main() {
    vector<int> A = {10, 20, 50, 40};
    vector<int> B = {50, 20, 40, 10};

    int result = minSwap(A, B);
    cout << "Minimum number of swaps required: " << result << endl;

    return 0;
}