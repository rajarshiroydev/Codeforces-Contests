#include<bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

template<typename S, typename T> void smax(S& a, const T& b) { if (a < b) a = b; }
template<typename S, typename T> void smin(S& a, const T& b) { if (a > b) a = b; }

#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_speed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define int long long

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
    vector<int> v;
    for (int i = 10; i > 0; i--) {
        v.push_back(i);
    }
    sort(all(v));
    for (auto i : v) cout << i << ' ';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int TC = 1;
    // cin >> TC;
    while (TC--) solve();
}