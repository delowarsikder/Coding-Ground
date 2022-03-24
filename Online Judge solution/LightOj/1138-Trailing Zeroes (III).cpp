// wrong
#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
#define mx 10000

int main()
{
    FastIO;
    // freopen("1138.txt", "w", stdout);
    vector<int> ans(36);
    map<int, int> result;
    bool visit[mx] = {false};

    for (int i = 1; i <= mx; i++)
    {
        ll zero_no = 0;
        int j = 1;

        // if (!visit[zero_no])
        // {
        while ((i / pow(5, j)) != 0)
        {
            zero_no += floor(i / pow(5, j));
            j++;
        }
        visit[zero_no] = true;
        // }

        cout << i << "--" << zero_no << endl;
        // if (result.find(zero_no) == result.end())
        // {
        //     result[zero_no] = i;
        // }
    }

    // ll tc;
    // cin >> tc;
    // ll caseNo = 0;
    // while (tc--)
    // {
    //     ll n;
    //     cin >> n;
    //     cout << "Case " << ++caseNo << ": ";

    //     cout << result[n] << endl;
    //     if (result[n])
    //     {
    //         cout << result[n] << endl;
    //     }
    //     else
    //     {
    //         cout << "impossible" << endl;
    //     }
    // }
    return 0;
}