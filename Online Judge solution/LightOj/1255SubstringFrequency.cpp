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
    int _case = 0;
    while (tc--)
    {
        string txt = "aaaaaa", pttrn = "aa";
        cin >> txt >> pttrn;
        int txtLen = txt.length();
        int pttrnLen = pttrn.length();
        int lps[pttrnLen];
        memset(lps, 0, sizeof(lps));
        int cnt = 0;
        // calculate the lps
        int i = 0, j = 1;
        while (j < pttrnLen)
        {
            if (pttrn[i] == pttrn[j])
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

        // applying KMP
        int idx = 0, k = 0;

        while (idx < txtLen)
        {
            if (txt[idx] == pttrn[k])
            {
                idx++;
                k++;
            }
            else
            {
                if (k != 0)
                {
                    k = k - 1;
                    k = lps[k];
                }
                else
                {
                    idx++;
                }
            }

            if (k == pttrnLen) // pattern find
            {
                cnt++;
                k = lps[k - 1];
            }
        }

        cout << "Case " << ++_case << ": " << cnt << endl;
    }
    return 0;
}