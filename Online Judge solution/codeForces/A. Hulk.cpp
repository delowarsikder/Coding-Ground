#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    ll n=3;
    cin>>n;
    ll loop=0;
    string hate="I hate ";
    string it="it";
    string love="I love ";
    string that="that ";
    //I hate that I love that I hate it
    int checker=n-1;
    bool flag=true;
    for(int i=1; i<=n; i++)
    {
        if(i&1)//1 3 5
        {
            cout<<hate;
        }
        else//2 4 6
        {
            cout<<love;
        }
        if(i<n)
        {
            cout<<that;
        }
    }
    cout<<it<<endl;
    return 0;
}
