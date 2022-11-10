// again write code in morning
// Link: https://www.hackerrank.com/challenges/beautiful-binary-string/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    string str = "0100101010100010110100100110110100011100111110101001011001110111110000101011011111011001111100011101";
    string pattrn = "010";
    cin >> str;
    int pattrnLen = pattrn.length();
    int i = 0, j = 1;

    // calculate lps
    int lps[pattrnLen];
    memset(lps, 0, sizeof(lps));
    while (j < pattrnLen)
    {
        if (pattrn[i] == pattrn[j])
        {
            lps[j] = i + 1;
            i++;
        }
        else
        {
            while (i != 0 && pattrn[i] != pattrn[j])
            {
                i = lps[i - 1];
            }
            if (pattrn[i] == pattrn[j])
            {
                lps[j] = i + 1;
            }
        }
        j++;
    }

    // cout << "Lps" << endl;
    // for (int i = 0; i < pattrnLen; i++)
    // {
    //     cout << lps[i] << " ";
    // }

    // find sub string frequency
    int strLen = str.length();

    int idx = 0, k = 0;
    int cnt = 0;

    while (idx < strLen)
    {
        if (str[idx] == pattrn[k])
        {
            idx++;
            k++;
        }
        else
        {
            if (k != 0)
            {
                k = lps[k - 1];
            }
            else
            {
                idx++;
            }
        }
        if (k == pattrnLen)
        {
            cnt++;
            k=0;
            // k = lps[k - 1]; //only for partial match
        }
    }
    cout << cnt << endl;

    return 0;
}