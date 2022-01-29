#include <bits/stdc++.h>
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define pb(x) push_back(x)
#define mx 100005
#define pf(x) printf(#x)
#define ms(key, value, _size) memset(key, value, sizeof(key) / _size)
#define endl "\n"
#define caseNo(x) cout << "Case " << x << ":"
using namespace std;

ll tree[mx];

//build a tree
ll updateTree(ll idx, ll n, ll val)
{
    while (idx <= n)
    {
        tree[idx] += val;
        idx += (idx & (-idx));
    }
}

ll query(ll idx)
{
    ll sum;
    sum = 0;
    while (idx > 0)
    {
        sum += tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}

void Fast()
{
#ifndef ONLINE_JUDGE
    freopen("input_1112.txt", "r", stdin);
    freopen("output_1112.txt","w",stdout);
#endif
    FastIO;
}

int main()
{

    // Fast();

    FastIO;
    ll tc, ncase = 0;
    cin >> tc;
    while (tc--)
    {
        caseNo(++ncase);
        cout<<endl;
        ms(tree, 0, sizeof(tree[0]));
        ll n, m, x;
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
        {
            cin >> x;
            updateTree(i, n, x);
        }
        while (m--)
        {
            ll choice;
            cin >> choice;
            switch (choice)
            {
                ll loc, loc1, loc2, val;
            case 1:
                cin >> loc;
                val = query(loc + 1) - query(loc);
                updateTree(loc + 1, n, -val);
                cout << val << endl;
                break;
            case 2:
                cin >> loc >> val;
                updateTree(loc+1, n, val);
                break;
            case 3:
                cin >> loc1 >> loc2;
                ll ans = query(loc2 + 1) - query(loc1);
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}
