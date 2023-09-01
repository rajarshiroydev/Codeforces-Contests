#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                cout << "13" << endl;
                break;
            }
            if (s[i] == '3') {
                cout << "31" << endl;
                break;
            }
        }
    }
}