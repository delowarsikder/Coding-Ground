#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll x;
    cin>>x;
    ll mn_val=x;
    ll mx_val=x;
    ll point=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        if(mn_val<x){
            mn_val=x;
            point++;
        }
        if(mx_val>x){
            mx_val=x;
            point++;
        }
    }

//    cout<<"point : ";
    cout<<point<<endl;

    return 0;
}
