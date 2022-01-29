#include <bits/stdc++.h>
using namespace std;

#define MAX_VAL 10000009
typedef long long ll;

ll arr[MAX_VAL];

int main()
{
    // code start
    // freopen("input.txt","r",stdin);
    ll n, m;
    cin >> n >> m;
    ll a, b, k;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> k;
        arr[a - 1] += k;
        arr[b] -= k;
    }
    ll sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx, sum);
    }
    cout << mx << endl;
}