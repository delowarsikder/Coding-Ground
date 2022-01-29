#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll m;
    cin>>m;
    ll height=0;
    ll sum=0;
    for(int n=1; n<=m; n++)
    {
        sum+=n*(n+1)/2;
        if(sum<=m){
            height=n;
        }
    }
    cout<<height<<endl;

    return 0;
}
