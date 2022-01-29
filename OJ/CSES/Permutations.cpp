#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    FastIO;
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        //first print even number
        for(int i=2; i<=n; i+=2)
        {
            if(!(i &1))
            {
                cout<<i<<endl;
            }
        }
        //then print odd

        for(int i=1; i<=n; i+=2)
        {
            if(i &1)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
