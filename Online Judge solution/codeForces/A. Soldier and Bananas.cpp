#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll s=0;
    for(int i=1;i<=w;i++){
        s+=i*k;
    }
    if(n>=s){
    cout<<0<<endl;}
    else{
        cout<<abs(s-n)<<endl;
    }

    return 0;
}
