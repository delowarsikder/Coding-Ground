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
    ll caseNo=0;
    cin>>tc;
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<": ";
        ll n;
        cin >> n;
        map<int,int> num;
        map<int,int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll index=abs(x);
            num[index] = x;
        }
        ll sum=0;
        for(it=num.begin(); it!=num.end(); it++)
        {
            sum+=it->second;
        }
        cout<<sum<<endl;

    }

    return 0;
}
