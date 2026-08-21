#include<iostream>
using namespace std;
int main(){

    int decimal, binary[32], i=0;

    cout<<"enter a decimal no. to convert into binary:";
    cin>>decimal;

    if(decimal == 0){
        cout<<"the binary equivalent is: 0";
    }
    else{
        while(decimal>0){
            binary[i] = decimal%2;
            decimal = decimal/2;
            i++;
        }
        cout<<"the binary equivalent is: ";
        for(int j=i-1; j>=0; j--){
            cout<<binary[j];
        }
    }
    return 0;
}