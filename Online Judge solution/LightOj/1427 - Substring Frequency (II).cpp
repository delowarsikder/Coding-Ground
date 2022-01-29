#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    ll caseNo=0;
    ll tc;
    cin>>tc; // first case
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<":"<<endl;
        ll n;
        string sample;
        cin>>n>>sample; // string+ number
        ll len_sample=sample.length();
        while(n--)
        {
            string test; //checker
            cin>>test;
            ll len_test=test.length();
            bool flag=true;
            ll counter=0;
            for(ll i=0; i<(len_sample-len_test)+1; i++)
            {
                flag=true;
                for(ll k=i,j=0; j<len_test; j++,k++)
                {
                    if(sample[k]!=test[j])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    counter++;
                }
            }
            cout<<counter<<endl;
        }

    }
    return 0;
}
