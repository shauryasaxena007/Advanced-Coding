#include<iostream>
using namespace std;
int main(){
     int arr[] = {10, 20, 10, 30, 20, 40};
    int n = 6;
    cout << "Duplicate elements in the array are: ";
    for(int i = 0; i < n; i++){
        bool isDuplicate = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
         
                    cout << arr[i] << " ";
                   
                
            }
        }
        return 0;
}
// find duplicate elements in an array