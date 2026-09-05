#include<iostream>
using namespace std;

int main(){
    int arr[10] ;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"the sum of elements in the array is: "<<sum<<endl;
    return 0;
}
