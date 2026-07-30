#include<iostream>
#include<vector>
using namespace std;


//check condition and try all allowed values
void solve(int index, int n, vector<int>&arr, vector<int>&values, int&count){

   if(index == n-1){
      if(arr[index] != arr[index-1]){
          for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
         count++;
      }
      return;
   }
   
   //try all allowed values
   for(int i=0;i<values.size();i++){
      int val = values[i];

      //pruning
      if(val!= arr[index-1]){
         arr[index] = val;
         solve(index+1, n, arr, values, count);
      }
   }
}


int countArguments(int n, vector<int>&values, int end){
    vector<int> arr(n);

    //fix first and last values
    arr[0]=1;
    arr[n-1]= end;

    int count = 0;
    solve(1, n, arr, values, count);

    return count;
}

int main() {
    int n = 4;
    // cin>>n;

    vector<int> values = {1, 2, 3, 4};

    int end = 3;

cout << "Count = " << countArguments(n, values, end) << endl;
    return 0;
}
