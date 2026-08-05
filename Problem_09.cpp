#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr = {-2,-3,4,-1,-2,1,5,-3};

    int maxSum=arr[0];
    int currentSum=arr[0];

    int s = 0, e = 0; 
    int tempStart = 0;

    for(int i =1; i<arr.size(); i++){

        if(currentSum + arr[i] > arr[i]){
            currentSum += arr[i];
    }
    else{
        currentSum = arr[i];
        tempStart = i;
    }

    if(currentSum > maxSum){
        maxSum = currentSum;
        s = tempStart;
        e = i;
    }
    }

    cout<<"The maximum sum is : "<<maxSum<<endl;
    cout<<"The subarray is : ";
    for(int i = s; i <= e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}