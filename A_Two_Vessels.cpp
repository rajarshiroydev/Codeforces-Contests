#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        float a, b, c; cin >> a >> b >> c;
        float maxi = max(a, b);
        float mini = min(a, b);
        int count = 0;
        while (maxi != mini) {
            if (maxi - mini >= c) {
                maxi -= c;
                mini += c;
                count++;
            }
            else if (maxi - mini < c) {
                float diff = (maxi - mini) / 2;
                if (diff > 0) {
                    maxi -= diff;
                    mini += diff;
                    count++;
                }
                else break;
            }

        }
        cout << count << endl;

    }
}