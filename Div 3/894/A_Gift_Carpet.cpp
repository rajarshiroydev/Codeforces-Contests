#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        char a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        queue<char> q;
        q.push('v');
        q.push('i');
        q.push('k');
        q.push('a');
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(a[j][i] == q.front()) {
                    q.pop();
                    break;
                } 
            }
            // if(q.empty()) cout << "NO";
        }
        if(q.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}