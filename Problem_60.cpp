#include<iostream>
#include<set>
using namespace std;
int main(){
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};

    set<int> s;

    for(int i = 0; i < 4; i++){
        s.insert(A[i]);
    }
    for(int i = 0; i< 4; i++){
        s.insert(B[i]);

    }
    for(int x : s){
        cout << x << " ";
    }
    return 0;
}
//union of two arrays