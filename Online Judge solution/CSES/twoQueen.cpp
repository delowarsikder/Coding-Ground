#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
int main(){
    ll n;
    cin>>n;
    ll res=(pow(n,4)/2)-(5*pow(n,3)/3)+(3*pow(n,2)/2)-(n/3);
    cout<<res<<endl;
    return 0;
}