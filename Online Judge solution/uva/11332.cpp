#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    while(1){
        ll n;
        cin>>n;
        if(n==0){
            break;
        }
        ll sum=0;
        while(n>0 || sum>9){
            if(n==0){
                n=sum;
                sum=0;
            }
            sum+=n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}