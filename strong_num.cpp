#include<iostream>
using namespace std;
 int fact(int r){
    int f = 1;
    for(int i=1; i<=r; i++){
        f *= i;
    }
    return f;   
 }
  bool isstrong(int n){
    int sum = 0;
    int temp = n;
    while(temp > 0){
        int r = temp % 10;
        sum += fact(r);
        temp /= 10;
    }
    return sum == n;
  }
  int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isstrong(n)){
        cout << n << " is a strong number." << endl;
    } else {
        cout << n << " is not a strong number." << endl;
    }
    return 0;   
}