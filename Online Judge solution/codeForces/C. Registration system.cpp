#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ll tc;
    cin>>tc;
    map<string,int>user;
    while(tc--)
    {
        string s;
        cin>>s;
        if(user[s]==0){
            cout<<"OK"<<endl;
        }else {
        cout<<s<<user[s]<<endl;
        }
        user[s]++;

    }

    return 0;
}
