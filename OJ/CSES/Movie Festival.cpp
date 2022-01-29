#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define ff first
#define ss second

typedef long long ll;
using namespace std;

bool comp(ll a, ll b)
{
    if (a == b)
    {
        return a < b;
    }
    else
    {
        return b < a;
    }
}

int main()
{
    ll cnt = 0;
    ll n;
    cin >> n;
    vector<pii> vp(n);
    while (n--)
    {
        cin >> vp[n].ff >> vp[n].ss;
    }
    sort(vp.begin(), vp.end());
    //print vector element
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].ff << " -> " << vp[i].ss << endl;
    }

    return 0;
}