#include<iostream>
using namespace std;
int main(){
     int decimal, rem, i=0;
     char hexadecimal[32];

     cout<<"enter a decimal no. to convert into hexadecimal:";
     cin>>decimal;

     if(decimal == 0){
        cout<<"hexadecimal is 0";

     }

     while(decimal>0){
        rem = decimal%16;
        if(rem<10){
            hexadecimal[i] = rem + 48;
        }
        else{
            hexadecimal[i] = rem + 55;
        }
        decimal = decimal/16;
        i++;
     }
     cout<<"hexadecimal is ";
     for(int j=i-1; j>=0; j--){
        cout<<hexadecimal[j];
     }
     return 0;
}