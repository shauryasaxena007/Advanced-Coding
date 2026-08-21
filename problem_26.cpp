#include<iostream>
using namespace std;
int main(){

    int decimal, octal[32], i=0;

    cout<<"enter a decimal no. to convert into octal:";
    cin>>decimal;

    if(decimal == 0){
        cout<<"the octal equivalent is: 0";
    }
    else{
        while(decimal>0){
            octal[i] = decimal%8;
            decimal = decimal/8;
            i++;
        }
        cout<<"the octal equivalent is: ";
        for(int j=i-1; j>=0; j--){
            cout<<octal[j];
        }
    }
    return 0;
}