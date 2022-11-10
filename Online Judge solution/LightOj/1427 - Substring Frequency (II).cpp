#include <bits/stdc++.h>
using namespace std;

#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;

void lpsCalculation(string s, vector<int> &lps)
{
}

int main()
{
    FastIO;
    ll caseNo = 0;
    ll tc;
    cin >> tc; // first case
    while (tc--)
    {
        map<string, int> mp;
        cout << "Case " << ++caseNo << ":" << endl;
        ll n; // second test case
        string str;
        map<string, vector<int>> lpsList; // pattern with own lps vector
        cin >> n >> str;
        for (int i = 0; i < n; i++)
        {
            string ptrn;
            cin >> ptrn;
            int ptrnLen = ptrn.length();
            vector<int> LPS;

            if (lpsList.find(ptrn) == lpsList.end())
            {
                lpsCalculation(ptrn, LPS);
            }

            // pass into pattern match
        }
    }

    return 0;
}
