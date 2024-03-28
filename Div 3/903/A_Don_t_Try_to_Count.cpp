// #include<bits/stdc++.h>
// #include<string.h>

// using namespace std;

// void dbg_out() { cerr << endl; }
// template<typename Head, typename... Tail>
// void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
// #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// template<typename S, typename T> void smax(S& a, const T& b) { if (a < b) a = b; }
// template<typename S, typename T> void smin(S& a, const T& b) { if (a > b) a = b; }

// #define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
// #define rng_speed(x) mt19937 rng(x)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) (int) (x).size()
// #define ll long long

// const int MXN = 1e5 + 5, INF = 1e9 + 5;

// void solve() {
//     int n, m; cin >> n >> m;
//     string x, s; cin >> x >> s;
//     int count = 0;
//     while (true) {
//         ll found = x.find(s);
//         if(sz(x) * sz(s) > 25 && found == -1) {
//             cout << -1 << endl;
//             break;
//         }

//     }
// }

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);

//     int TC = 1;
//     cin >> TC;
//     while (TC--) solve();
// }

// // size_t found = str.find(str1);
// // if (found != string::npos)
// // cout << "First occurrence is " <<
// // found << endl;

public BankAccount(int acNumber, String name, int bal) {
    this.accountNumber = acNumber;
    this.name = name;
    this.balance = bal;
}
//prints the balance
public void balance() {
    System.out.println(this.balance);
    //updates balance = balance + amount
    public void deposit(int amount) {
        this.balance += amount;
        //calls the checkMinBalance(amount) method,
        //if it returns true update balance = balance - amount else prints Transcation failed
        public void withdraw(int amount) {
            if (checkMinBalance(amount)) {
            }
            this.balance -= amount;
            else {
                System.out.println("Transaction failed");
            }
        }
    }
}