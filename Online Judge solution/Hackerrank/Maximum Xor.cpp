#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    cin >> tc;
    vector<ll> v;
    while (tc--)
    {
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    ll q;

    cin >> q;

    while (q--)
    {
        ll mx=INT_MIN;
        ll te;
        cin >> te;
        for (ll i=0; i<v.size(); i++)
        {
            mx=max(mx,(te^v[i]));
        }
        cout<<mx<<endl;
    }

    return 0;
}
