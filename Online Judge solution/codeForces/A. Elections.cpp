#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll best = max(a, max(b, c));
        if (best == a && best == b)
        {
            cout << best - a + 1 << " " << best - b + 1 << " " << best + 1 << endl;
        }
        else if (best == a && best == c)
        {
            cout << best - a + 1 << " " << best + 1 << " " << best + 1 << endl;
        }
        else if (best == b && best == c)
        {
            cout << best + 1 << " " << best + 1 << " " << best + 1 << endl;
        }
         else if (best == a)
        {
            cout << best - a <<" "<< best - b + 1 << " "<< best - c + 1 << endl;
        }
        else if (best == b)
        {
            cout << best - a + 1 << " " << best - b << " " << best - c + 1 << endl;
        }
        else
        {
            cout << best - a + 1 << " " << best - b + 1 << " " << best - c << endl;
        }
    }
    return 0;
}
