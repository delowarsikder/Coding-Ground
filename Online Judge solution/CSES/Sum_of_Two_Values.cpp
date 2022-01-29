#include <bits/stdc++.h>
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;
typedef long long ll;

int main()
{
    FastIO;
    // freopen("test_input.txt", "r", stdin);
    ll n, s;
    cin >> n >> s;
    vector<pii> vpii(n);
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        // cin >> temp;
        // vpii.pb(mp(temp, i + 1));
        cin >> vpii[i].ff;
        vpii[i].ss = i + 1;
    }
    sort(vpii.begin(), vpii.end());
    // sort(all(vpii));
    ll start = 0, end = n - 1;
    while (start < end)
    {
        if (vpii[start].ff + vpii[end].ff == s)
        {
            cout << vpii[start].ss << " " << vpii[end].ss << endl;
            return 0;
        }
        else if ((vpii[start].ff + vpii[end].ff) > s)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
