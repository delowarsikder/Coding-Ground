#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define mx 20
typedef long long ll;

int main()
{
    FastIO;
    vector<ll>fact_storage;
    fact_storage.push_back(1);
    ll temp=1;
    for(int i=1; i<=mx; i++)
    {
        temp=fact_storage[i-1]*i;
        fact_storage.push_back(temp);
    }

//    cout<<"array:"<<endl;
//    for(int i=0; i<=mx; i++)
//    {
//        cout<<i<<"!->"<<fact_storage[i]<<endl;
//    }

    ll tc;
    cin>>tc;
    ll caseNo=0;
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<": ";
        ll n;
        cin>>n;
        ll sum=0;
        vector<ll>ans;
        for(int i=mx; i>=0; i--)
        {
            if(fact_storage[i]<=n)
            {
                n-=fact_storage[i];
                ans.push_back(i);
            }
        }
        if(n!=0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            sort(ans.begin(),ans.end());
            ll v=ans.size()-1;
            for(int i=0; i<v; i++)
            {
                cout<<ans[i]<<"!+";
            }
            cout<<ans[v]<<"!"<<endl;
        }

    }


    return 0;
}
