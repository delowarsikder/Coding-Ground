#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

#ifdef _DEBUG

#endif // _DEBUG

int main()
{
    FastIO;
    ll tc,_case=0;

    cin>>tc;
    while(tc--)
    {
        printf("Case %d: ",++_case);
        ll n,k;
        cin>>n>>k;
        ll cnt=1;
        ll m=k;
         k=k%n;
        while(k)
        {
            cnt++;
            k=k*10+m;
            if(k>=n)
            {
                k=k%n;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
