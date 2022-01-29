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
        cout << "Case " << ++caseNo << ":" << endl;
        ll n;
        cin >> n;
        ll sum = 0;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        while (n--)
        {
            string s;
            getline(cin, s);
            stringstream ss(s);
            string temp;
            ll money = 0;
            ss >> temp;
            ss >> money;
            sum = sum + money;
            if (temp == "report")
            {
                cout << sum << endl;
            }
        }
    }
    return 0;
}