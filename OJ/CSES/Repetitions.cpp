#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    int ncount=1;
    int _max=0;
    for(int i=1; i<=s.length(); i++)
    {
        if(s[i-1]==s[i])
        {
            ncount++;
        }
        else
        {
            _max=max(_max,ncount);
            ncount=1;
        }
    }
    cout<<_max<<endl;
    return 0;
}
