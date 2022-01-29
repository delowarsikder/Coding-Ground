#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;

    while (cin >> tc)
    {
        ll _case = 0;
        for (int i = 0; i < tc; i++)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            cout << "Case " << ++_case << ": ";
            if (x <= 20 && y <= 20 && z <= 20)
            {
                cout << "good" << endl;
            }
            else
            {
                cout << "bad" << endl;
            }
        }
    }
    return 0;
}