#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

    string ans = "";

    for(int i = 0; i< strs[0].length(); i++){
        char ch = strs[0][i];
        for(int j = 1; j<strs.size(); j++){
            if(i >= strs[j].length() || strs[j][i] != ch){
                cout << ans;
                return 0;
            }
        }
        ans =ans + ch;
    }
    cout << ans;
    return 0;
}