#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{

    long long a, b, k;
    cin >> a >> b >> k;
    int rem = b % k;
    cout << a + rem << endl;
    return 0;
}