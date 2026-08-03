#include<iostream>
using namespace std;

int main(){
    double distance, time;
    cout<<"Enter the distance in km :"<<endl;
    cin>>distance;
    cout<<"Enter the time in seconds :"<<endl;
    cin>>time ;

    double speeds = (distance/time) *3.6; // converting km/h to m/s
    cout<<"The speed is in m/s : "<<speeds<<" m/s"<<endl;

    return 0;
    
}