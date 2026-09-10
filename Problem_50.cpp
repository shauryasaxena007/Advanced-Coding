#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 5, 20, 8};
    int n = 4;

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    cout << "Difference between max and min: " << max - min << endl;
    return 0;
}
//maximum difference