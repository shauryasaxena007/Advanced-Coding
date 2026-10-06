#include<iostream>
using namespace std;
int main(){
    int arr[50],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
   
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout<<"Element found at index: "<<i;
            return 0;
        }
        
    }
    cout<<"Element not found";
    return 0;
}