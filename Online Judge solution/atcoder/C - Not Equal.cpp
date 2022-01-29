#include<bits/stdc++.h>
using namespace std;
#define md 1000000007
#define pb(x) push_back(x)
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<int>v;
    while(n--){
        ll temp;
        cin>>temp;
        v.pb(temp);
    }
    ll _size=v.size();

    sort(v.begin(),v.end());
    ll ans=1;
    for(int i=0;i<_size;i++){
        ans=((ans%md)*max(0,v[i]-i)%md)%md;
    }
    cout<<ans<<endl;

return 0;}

