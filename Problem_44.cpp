#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n =6;
    bool visited[n] = {false};

    for(int i=0; i<n; i++){
        if(visited[i] == true){
            continue;
        }
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
    return 0;
}
// count the frequency of elements in an array