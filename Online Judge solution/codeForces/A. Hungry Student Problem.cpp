#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll x;
        bool flag=false;
        cin>>x;
        for(ll i=0;i<=33;i++){
            for(ll j=0;j<=33;j++){
                if((3*i+7*j)==x){
                    flag=true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }


            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
    }


    return 0;
}
