#include<iostream>
#include<climits>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number of elements: ";
     cin>>n;

     int arr[n];
     cout<<"Enter the elements: ";
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }

     int largest = INT_MIN;
     int second_largest = INT_MIN;

     for (int i =0; i<n; i++){
        if(arr[i] >largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
     }
     cout<<"The largest element is: "<<largest<<endl;
     cout<<"The second largest element is: "<<second_largest<<endl;
     
     return 0;
}