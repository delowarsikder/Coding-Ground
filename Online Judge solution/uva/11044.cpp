#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll tc;
    while(cin>>tc){
        for(int i=0;i<tc;i++){
            ll x,y;
            cin>>x>>y;
            cout<<(x/3)*(y/3)<<endl;
        }
    }
    return 0;
}