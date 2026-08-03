#include<iostream>
#include<vector>
using namespace std;

int main(){
    double n;
    cout<<"enter the no. to know :"<<endl;
    cin>>n;


    double happy = n;
    double sad = 0;

    //simulate 4 iteration 
    for(int i=0; i<=4; i++){
       double newHappy = 0.30*happy + 0.50*sad;
        double newSad = 0.70*happy+ 0.50*sad;


        happy = newHappy;
        sad = newSad;
    }
    cout << "Final happy: " << happy << endl;
    cout << "Final sad: " << sad << endl;
    return 0;
}