#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c;
    char s,e;
    cin>>a>>s>>b>>e>>c;
    ll res;
    if(s=='+'){
        res=a+b;
    }
    else if(s=='-'){
        res=a-b;
    }
    else if(s=='*'){
        res=a*b;
    }
    if(res==c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}
