#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string txt = "AAAABAAAAABBBAAAAB";
    string pattern = "AAAB";

    int patternLen = pattern.length();
    int lps[patternLen];
    int txtLen = txt.length();
    memset(lps, 0, sizeof(lps));

    int i = 0, j = 1;
    // longest proper prefix
    while (j < patternLen)
    {
        if (pattern[i] == pattern[j])
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
                lps[j] = i;
                j++;
            }
        }
    }

    cout << "Lps" << endl;
    for (int i = 0; i < patternLen; i++)
    {
        cout << lps[i] << " ";
    }

    // applying Knuth-morris-pratt alogorithm
    int k = 0;
    vector<int> matchIdx;
    int idx = 0;
    while (idx < txtLen)
    {
        if (txt[idx] == pattern[k])
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

        if (k == patternLen)
        {
            matchIdx.push_back(idx - k);
            k = 0;
        }
    }

    cout << "\nmatching point :";
    for (int i = 0; i < matchIdx.size(); i++)
    {
        cout << matchIdx[i] << " ";
    }

    return 0;
}