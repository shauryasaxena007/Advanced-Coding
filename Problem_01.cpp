#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Transection{
    string sender, receiver;
    double amount;
    long long time;
};

int main(){
    int n;
    cin>>n;


    vector<Transection> t(n);

    for(int i=0; i<n; i++){
        cin>>t[i].sender>>t[i].receiver>>t[i].amount>>t[i].time;
    }

    vector<bool> isFraud(n, false);

    //compare each transection with every other transection
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(t[i].sender == t[j].receiver &&
                t[i].receiver == t[j].sender &&
                t[i].amount == t[j].amount &&
                abs(t[i].time - t[j].time) <= 60){

                isFraud[i] = true;
                isFraud[j] = true;
            }
        }
    }
    //print the result
    cout<<"Fraudulent Transactions: "<<endl;
    for(int i=0; i<n; i++){
        if(isFraud[i]){
            cout<<t[i].sender<<" "
            <<t[i].receiver<<" "
            <<t[i].amount<<" "
            <<t[i].time<<endl;
        }
    }
    return 0;
}

//input : 4
// Alice Bob 1000 100
// Bob Alice 1000 150
// John Mike 500 200
// Mike John 500 500