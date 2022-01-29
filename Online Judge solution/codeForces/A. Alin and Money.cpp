#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
//    freopen("input.txt","r",stdin);
    ll n;
    cin>>n;
    ll pos=-1;
    ll sum=0;
    ll x;
    ll max_sum=0;
//    cout<<"i->Sum"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
//        cout<<i<<"->"<<sum<<endl;
        if(sum>max_sum)
        {
            max_sum=sum;
            pos=i;
        }
    }
    cout<<pos+1<<endl;

    return 0;
}
