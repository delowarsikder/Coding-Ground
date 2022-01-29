//wrong
#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    freopen("1138.txt", "w", stdout);
    vector<int> ans(40);
    map<int, int> result;

    for (int i = 1; i < 40; i++)
    {
        ll zero_no = 0;
        for (int j = 1; (i / pow(5, j)) != 0; j++)
        {
            zero_no += floor(i / pow(5, j));
        }
        // cout<<i<<"--"<<zero_no<<endl;
        if (result.find(zero_no) == result.end())
        {
            result[zero_no] = i;
        }
    }
    ll tc;
    cin >> tc;
    ll caseNo = 0;
    while (tc--)
    {
        ll n;
        cin >> n;
        cout << "Case " << ++caseNo << ": ";

        cout << result[n] << endl;
        if (result[n])
        {
            cout << result[n] << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    return 0;
}