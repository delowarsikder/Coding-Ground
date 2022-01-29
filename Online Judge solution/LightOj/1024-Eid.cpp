#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    ll caseNo=0;
    while(tc--){
        cout<<"Case "<<++caseNo<<": ";
        ll n;
        cin>>n;
        string mx="";
        string s;
        while(n--){
            cin>>s;
            mx=max(s,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
