#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v(100);

int fibonacci()
{

    v[0]=0;
    v[1]=1;
    for(ll i=2; i<=50; i++)
    {
        v[i]=v[i-1]+v[i-2];
    }
}
int main()
{

    fibonacci();
    ll n;
    cin>>n;
    cout<<v[n-1]<<endl;

//    for(ll i=1;i<=50;i++){
//        cout<<v[i-1]<<" "<<endl;
//    }

    return 0;
}


