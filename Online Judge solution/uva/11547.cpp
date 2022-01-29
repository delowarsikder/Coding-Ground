#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    while (cin >> tc)
    {
        for (int i = 0; i < tc; i++)
        {
            ll n;
            cin >> n;
            n = n * 567;
            n = n / 9;
            n = n + 7492;
            n = n * 235;
            n = n / 47;
            n = n - 498;
            n=n/10;
            cout << abs(n%10 )<< endl;
        }
    }
    return 0;
}