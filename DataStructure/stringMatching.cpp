#include <iostream>
#include <string>
using namespace std;

int main()
{
    int mxLen = 0;
    string t = "aaaaaab";
    string s = "kaab";

    for (int i = 0; i < t.length(); i++)
    {
        int k = i;
        int cnt = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == t[k])
            {
                k++;
                cnt++;
            }
            else
            {
                cnt = 0;
                mxLen = max(mxLen, cnt);
            }
        }
        mxLen = max(mxLen, cnt);
    }
    cout << "maximum match: " << mxLen << endl;

    return 0;
}