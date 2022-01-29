#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    double ans=INT_MAX;
    while(n--)
    {
        double x,y;
        cin>>x>>y;
        ans=min(m*x/y,ans);
    }
    cout<<setprecision(8)<<fixed<<ans<<endl;
    return 0;
}
