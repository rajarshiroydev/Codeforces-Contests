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
#define ll long long

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
    ll a, b, n; cin >> a >> b >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(all(v));
    ll sum = b;
    ll ans = 0;
    int i = 0;

    for (i; i < n; i++) {
        sum += v[i];
        if (sum > a) {
            ans += sum - v[i] - 1;
            break;
        }
    }
    for (i; i < n; i++) {
        if (i == n - 1) ans += min(a, v[i] + b);
        else ans += min(a, v[i] + b) - 1;
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}