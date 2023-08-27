#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    string ans = "()";
    while(t--) {
        int count = 0;
        string s; cin >> s;
        if(s == ")(") cout << "YES" << endl << "()()" << endl;
        else {
            for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') count++;
            if(s[i] == ')') count--;
        }
        if(count != 0) {
            cout << "YES" << endl;
            for(int i = 0; i < s.size(); i++) {
                cout << ans;
            }
            cout << "" << endl;
        }
        else cout << "NO" << endl;
        }
    }
    return 0;
}