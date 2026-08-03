#include<iostream>
using namespace std;

int main(){
    double distance, time;
    cout<<"Enter the distance in km :"<<endl;
    cin>>distance;
    cout<<"Enter the time in hours :"<<endl;
    cin>>time;

    double speed = (distance/time) *3.6; // converting km/h to m/s
    cout<<"The speed is : "<<speed<<" m/s"<<endl;
    return 0;
    
}