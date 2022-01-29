#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll best = 0;
    vll a(n), b(m);
    // input value a
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // input value b
    rep(i, m)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    // check availability
    ll cnt = 0;
    ll t = 0;
    for (ll i = 0, j = 0; i < n && j < m;)
    {
        ll size_s = a[i] - k;
        ll size_b = a[i] + k;

        if (abs(a[i] - b[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (size_b > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
} // namespace std;
