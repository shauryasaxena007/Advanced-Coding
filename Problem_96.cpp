
#include <iostream>
#include <vector>
using namespace std;

void generate(int n, int open, int close,
              string current, vector<string>& ans) {

    if (current.length() == 2 * n) {
        ans.push_back(current);
        return;
    }

    if (open < n) {
        generate(n, open + 1, close,
                 current + "(", ans);
    }

    if (close < open) {
        generate(n, open, close + 1,
                 current + ")", ans);
    }
}

int main() {
    int n = 3;
    vector<string> ans;

    generate(n, 0, 0, "", ans);

    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}
//parenthesis generation using recursion
