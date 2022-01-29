#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        ll len=str.length();
        bool flag=true;
        cout<<"len :"<<len<<endl;
        for(int i=0; i<len; i++)
        {
            ll sub_len=str[i]-'a'+1;
            cout<<"sub len: "<<sub_len<<endl;
            if(sub_len>len){
                flag=false;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
