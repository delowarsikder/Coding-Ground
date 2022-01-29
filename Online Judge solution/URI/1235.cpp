#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
//    freopen("input.txt","r",stdin);
    ll tc;
    cin>>tc;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(tc--)
    {
        string str;
        getline(cin,str);
        ll len=str.length();
        for(ll i=len/2-1; i>=0; i--)
        {
            cout<<str[i];
        }
        for(ll j=len-1; j>=len/2; j--)
        {
            cout<<str[j];
        }
        cout<<endl;
    }

    return 0;
}
