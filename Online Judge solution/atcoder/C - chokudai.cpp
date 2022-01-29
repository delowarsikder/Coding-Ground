#include<bits/stdc++.h>
using namespace std;
#define MOD 10000000007
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    ll sum=0;
    string sample="chokudai";

    for(int i=0,j=0; i<s.length(); i++)
    {
        if(s[i]==sample[j])
        {
            i++;
            j++;
        }
    }

    return 0;
}
