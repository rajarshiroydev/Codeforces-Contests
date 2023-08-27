// // #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// int main() {
//     int t; cin >> t;
//     int n;
//     while(t--) {
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         int count_odd = 0, count_even = 0;
//         for (int i = 0; i < n; i++) {
//             if(arr[i] % 2 == 0) {
//                 count_even++;
//             } // 4
//             else {
//                 count_odd++; //4
//             }
//         }
//         if(count_odd % 2 == 0 && count_even > 0) cout << "YES" << endl;
//         else if(count_odd % 2 != 0 && count_even > 0) cout << "NO" << endl;
//         else if(count_odd % 2 == 0 & count_even == 0) cout << "YES" << endl;
//         else if(count_odd % 2 != 0 && count_even == 0) cout << "NO" << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    int n;
    while(t--) {
        cin >> n;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        // cout << sum << ' ';
        if(sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}