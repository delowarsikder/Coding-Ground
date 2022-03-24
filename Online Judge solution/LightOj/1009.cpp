// wrong
#include <bits/stdc++.h>
using namespace std;
#define MX 100000
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
#define mp make_pair
int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    ll caseNo = 0;
    while (tc--)
    {
        map<int, int> mp;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll p, q;
            cin >> p >> q;
            mp[p]++;
            mp[q]++;
        }
        int mx = INT_MIN;
        for (auto m : mp)
        {
            mx = max(mx, m.second);
        }
        cout << "Case " << ++caseNo << ": " << mx << endl;
    }
    return 0;
}
