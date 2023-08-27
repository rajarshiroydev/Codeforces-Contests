// 1 4 3
// x y n
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;
        long long a[n];
        a[0] = x;
        a[n - 1] = y;
        int k = 1, j = 1;
        bool flag = true;
        for (int i = n - 2; i > 0; i--)
        {
            a[i] = y - j;
            if (a[i] <= a[0])
                flag = false;
            k++;
            j += k;
        }
        if (!flag)
            cout << -1;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i + 1] - a[i] == a[i + 2] - a[i + 1])
                    cout << -1;
                else
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (j == n - 1)
                            cout << a[j];
                        else
                            cout << a[j] << ' ';
                    }
                }
                break;
            }
        }
        cout << endl;
    }
    return 0;
}

// 1 4 6 7

// i = 3
