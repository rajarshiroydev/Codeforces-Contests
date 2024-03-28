#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a, q; cin >> n >> a >> q;
        char arr[q];
        int count = 0;
        for(int i = 0; i < q; i++) {
            cin >> arr[i];
        }
        int maxCount = 0;
        for(int i = 0; i < q; i++) {
            if(arr[i] == '-') count -= 1;
            else if(arr[i] == '+') {
                count += 1;
                maxCount += 1;
            } 
        }
        // cout << maxCount << endl;
        // cout << count << endl;
        if(n == a) cout << "YES" << endl;
        else if((a + maxCount == n)) cout << "MAYBE" << endl;
        else if((a + maxCount) < n) cout << "NO" << endl; 
        else if((a + maxCount) > n) cout << "YES" << endl;
    }
}