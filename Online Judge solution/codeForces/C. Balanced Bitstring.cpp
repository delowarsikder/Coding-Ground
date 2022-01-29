#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define pb(x) push_back(x)

typedef long long ll;
#ifdef _DEBUG
freopen("outputc.txt","w",stdout);
#endif // _DEBUG

int main()
{
    FastIO;
//    freopen("outputc.txt","w",stdout);
//    ll tc;
//    cin>>tc;
//    while(tc--)
//    {
        string s="1?0";
        ll n=3,k=2;
//        cin>>n>>k;
//        cin>>s;
//
//for(int i=0;i<n;i++){
//    if(s[i]=='1' || s[i]=='0'){
//        continue;
//    }
//    else{
//        s[i]
//    }
//}
        bool flag=false;
        for(int i=0; i<=(n-k); i++)
        {
            ll one=0,zero=0,other=0;
            for(int j=i; j<k+i; j++)
            {
                if(s[j]=='1')
                {
                    one++;
                }
                else if(s[j]=='0')
                {
                    zero++;
                }
                else
                {
                    other++;
                }
            }
        cout<<"count :"<<i+1<<endl;
        cout<<"one :"<<one<<endl;
        cout<<"zero :"<<zero<<endl;
        cout<<"other :"<<other<<endl;
            if (other==k || one==k|| zero==k)
            {
                flag=true;
            }
            else if((one+other)==zero || (zero+other)==one)
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
//    }
    return 0;
}
