#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin >> tc;
    ll a, b;
    ll s1 = 0, s2 = 0;
    while (tc--)
    {
        cin >> a >> b;
        s1 += (a* (a-1) / 2);
        s2 += (b * (b + 1) / 2);
    }
    cout << s2 - s1 << endl;
    return 0;
}