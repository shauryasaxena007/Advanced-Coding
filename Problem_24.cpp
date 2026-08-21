#include<iostream>
using namespace std;
int main(){
    int decimal = 0, binary, base=1;

    cout<<"enter a binary no. to convert into decimal:";
    cin>>binary;

    while(binary>0){
        int digit = binary%10;
        decimal = decimal + digit * base;

        base = base * 2;
        binary = binary/10;
    }
    cout<<"the decimal equivalent is: "<<decimal;

    return 0;
    
}