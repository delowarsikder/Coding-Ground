#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string dec_to_bin(ll n)
{
    string s = "";
    for (int i = 31; i >= 0; i--)
    {
        int k = 1 << i;
        if (k & n)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    return s;
}

int bin_to_dec(string s)
{
    int val = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        int temp = s[i] - '0';
        int k = 1 << i;
        val += temp * k;
    }
    return val;
}

int main()
{
    ll tc;
    cin >> tc;
    ll _case = 0;
    while (tc--)
    {
        ll n;
        cin >> n;
        string str = dec_to_bin(n);
        next_permutation(str.begin(), str.end());
        // cout << "Binary:" << str << endl;
        int next_dec = bin_to_dec(str);
        // cout << "Binary:" << bin << endl;
        cout << "Case " << ++_case << ": " << next_dec << endl;
    }
    return 0;
}