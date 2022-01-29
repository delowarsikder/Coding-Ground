#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
    ll n, b, h, w;
    while (cin >> n >> b >> h >> w)
    {
        ll min_cost = INT_MAX;
        for (int i = 0; i < h; i++)
        {
            ll p;
            cin >> p;
            ll bed = INT_MAX;
            for (int k = 0; k < w; k++)
            {
                ll x;
                cin >> x;
                if (x >= n)
                {
                    bed = n;
                }
            }
            min_cost = min(min_cost, bed * p);
        }
        if (min_cost <= b)
        {
            cout << min_cost << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }
    return 0;
}