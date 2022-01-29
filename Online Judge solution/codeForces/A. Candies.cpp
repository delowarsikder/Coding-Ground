#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll i=2;
//        cout<<"ans : ";
        while(1){
            ll ans=pow(2,i)-1;
            if(n%ans==0){
                cout<<n/ans<<endl;
                break;
            }
            i++;
        }
    }



    return 0;
}
