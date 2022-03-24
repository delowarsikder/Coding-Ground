#include <bits/stdc++.h>
using namespace std;

#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    int tc;
    int _case = 0;
    cin >> tc;
    while (tc--)
    {
        string ptr;
        cin >> ptr;
        string str = ptr;
        reverse(str.begin(), str.end());
        ptr = str + "#" + ptr;

        ll len = ptr.length();
        ll lps[len + 2];
        memset(lps, 0, sizeof(lps));

        // calculate the longest proper prefix

        int i = 0, j = 1;
        while (j < len)
        {
            if (ptr[i] == ptr[j])
            {
                lps[j] = i + 1;
                i++;
                j++;
            }
            else
            {
                if (i != 0)
                {
                    i = i - 1;
                    i = lps[i];
                }
                else
                {
                    lps[j] = 0;
                    j++;
                }
            }
        }
        // cout << "size: " << len << endl;
        // cout << "lps:" << endl;
        // for (int i = 0; i < len; i++)
        // {
        //     cout << lps[i] << " ";
        // }

        int ans = len - 1 - lps[len - 1];
        cout << "Case " << ++_case << ": " << ans << endl;
    }
    return 0;
}