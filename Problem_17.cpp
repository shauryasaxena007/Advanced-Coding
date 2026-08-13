#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number: ";
    cin>>m;

    int freq[10] = {0};

    while(m>0){
        int digit = m%10;
        freq[digit]++;
        m /= 10;
    }

    for(int i =0 ; i<10; i++){
        if(freq[i] > 0){
            cout<<"Digit "<<i<<" = "<<freq[i]<<" times."<<endl;
        }
    }
    return 0;
}