#include<iostream>
using namespace std;
int value(char c){
    if(c=='I') return 1;
    if(c=='V') return 5;
    if(c=='X') return 10;
    if(c=='L') return 50;
    if(c=='C') return 100;
    if(c=='D') return 500;
    if(c=='M') return 1000;
    return 0;
}

int main(){
    string s;
    int ans=0;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    cout << "The integer value is: " << value(s[0]) << endl;

    for(int i = 0; i < s.length(); i++){
        
        if(i+1 < s.length() && value(s[i]) < value(s[i+1])){
            cout << "The integer value is: " << value(s[i+1]) - value(s[i]) << endl;
            i++;
        }
        else{
            cout << "The integer value is: " << value(s[i]) << endl;
        }
    }
    cout<< ans;
    return 0;
    
}//Roman to integer