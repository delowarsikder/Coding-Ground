#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

int bin2Dec(string s)
{
    ll len_s = s.length();
    ll sum = 0;
    // cout << "s: " << s << "len: " << len_s << endl;
    for (ll i = len_s - 1, j = 0; i >= 0; i--, j++)
    {
        ll a = s[j] - '0';
        sum = sum + a * (1 << i);
    }
    return sum;
}
int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    ll caseNo = 0;
    while (tc--)
    {
        cout << "Case " << ++caseNo << ": ";
        string decIp;
        string binIp;
        cin >> decIp >> binIp;
        stringstream ssD, ssB;
        ssD << decIp;
        ssB << binIp;
        bool flag = false;
        while (!ssD.eof() && !ssB.eof())
        {
            ll d, b;
            char c;
            ssD >> d >> c;
            ssB >> b >> c;
            // cout << "d: " << d << endl;
            // cout << "b: " << b << endl;
            stringstream ss;
            ss << b;
            string temp;
            ss >> temp;
            ll res = bin2Dec(temp);
            if (res == d)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            // cout << "res: " << res << endl;
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}