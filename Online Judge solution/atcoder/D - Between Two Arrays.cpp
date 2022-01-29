#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 998244353

int main()
{
    ll n;
    cin>>n;
    set<ll>a;
    set<ll>b;
    ll x;

    for(int i=0; i<2*n; i++)
    {
        cin>>x;
        a.insert(x);
    }
    for(int i=0; i<2*n; i++)
    {
        cin>>x;
        b.insert(x);
    }

    vector<ll>arr;
    for(auto s:st)
    {
        cout<<s<<endl;
//        arr.push_back(s);
    }
    cout<<"size :"<<st.size()<<endl;
//    ll permud=0;
//
//    do
//    {
//        permud++;
//    }
//    while(next_permutation(arr.begin(),arr.end()));
//
//    cout<<"permulation ";
//    cout<<permud%mod<<endl;

    return 0;
}
