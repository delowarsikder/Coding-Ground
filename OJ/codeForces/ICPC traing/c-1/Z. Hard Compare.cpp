#include<bits/stdc++.h>
using namespace std;

typedef long double ll;

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll s1=b*log(a);
    ll s2=d*log(c);
    if(s1>s2){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;}
return 0;
}
