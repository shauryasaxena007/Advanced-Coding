#include<iostream>
#include <unordered_map>Problem_
using namespace std;

int main(){

  int n;
    cin >> n;

    int arr[n];

    unordered_map<int, int> freq;

    // Input and store frequency
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int minFreq = n;
    int maxFreq = 0;

    int minElement;
    int maxElement;

    // Traverse frequency map
    for(auto x : freq)
    {
        if(x.second < minFreq)
        {
            minFreq = x.second;
            minElement = x.first;
        }

        if(x.second > maxFreq)
        {
            maxFreq = x.second;
            maxElement = x.first;
        }
    }

    cout << minElement << " " << maxElement;

    return 0;
}