#include <bits/stdc++.h>
using namespace std;

#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    ll caseNo = 0;
    while (tc--)
    {
        cout << "Case " << ++caseNo << ": ";
        ll n;
        cin >> n;
        // vector<ll> a(n);
        ll curr, next;
        cin >> curr;
        ll cnt = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> next;
            if ((next - curr) >= 1 && (next - curr) <= 5)
            {
                cnt++;
            }
            curr=next;
        }
            curr=next;
        cout<<cnt<<endl;
    }

    return 0;
}
