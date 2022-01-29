#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    ll x=n;
    ll m=0;
    while(n!=0){
        m=m*10+n%10;
        n/=10;
    }
    cout<<m<<endl;
    if(m==x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



return 0;}

