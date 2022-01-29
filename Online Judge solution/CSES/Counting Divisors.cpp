#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

#define mx 
#define mod 1000000007

typedef long long ll;
using namespace std;

int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll divisor = 0;
        ll n;
        cin >> n;
        for (int i = 1; i * i <= n; i++)
        {
            if (i * i == n)
            {
                divisor += 1;
            }
            else if (n % i == 0)
            {
                divisor += 2;
            }
        }
        cout << divisor << endl;
    }

    return 0;
}