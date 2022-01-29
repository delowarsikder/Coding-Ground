#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    ll tc;
    while (cin >> tc)
    {
        for (int i = 0; i < tc; i++)
        {
           ld sum;
            cin >> sum;
            ll ans = 0;
           ans=0.5*(-1+sqrt(1+8*sum));
            cout << ans << endl;
        }
    }
}