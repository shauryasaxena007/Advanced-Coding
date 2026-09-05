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
    int larg = arr[0];
    int second_larg = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            second_larg = larg;
            larg = arr[i];
        }
        else if(arr[i]>second_larg && arr[i]!=larg){
            second_larg = arr[i];
        }
    }
    cout<<"the largest element is: "<<larg<<endl;
    cout<<"the second largest element is: "<<second_larg<<endl;
    return 0;

}