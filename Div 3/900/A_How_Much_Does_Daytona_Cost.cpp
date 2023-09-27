#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

//======================================================//

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == k)
        flag = true;
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}