#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    long long t;
    cin >> t;
    long long res;
    while (t--)
    {
        long long x, y, a, b;
        cin >> t >> x >> y >> a >> b;

        long long total_a, total_b;
        cin >> total_a >> total_b;

        total_a = a * x;
        total_b = b * y;

        res = total_a + total_b;
    }
    cout << res << endl;
    return 0;
}