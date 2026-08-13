#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int freq[10] = {0};

    while(n>0){
        int digit = n%10;
        freq[digit]++;
        n /= 10;
    }

    for(int i =0 ; i<10; i++){
        if(freq[i] > 0){
            cout<<"Digit "<<i<<" = "<<freq[i]<<" times."<<endl;
        }
    }
    return 0;
}