#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int sum =0;

    for(int i = 0; i<n-1; i++){
        int x;
        cout<<"Enter the element: ";
        cin>>x;
        sum += x;
    }
    int total_sum = (n*(n+1))/2;
    int missing_number = total_sum - sum;

    cout<<"The missing number is: "<<missing_number<<endl;
    return 0;

}