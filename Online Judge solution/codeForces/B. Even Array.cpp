#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(auto &it:arr)
        {
            cin>>it;
        }
        ll odd_mismatch=0;
        ll even_mismatch=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0 && arr[i]%2!=0)
            {
                odd_mismatch++;
            }
            if(i%2!=0 && arr[i]%2==0)
            {
                even_mismatch++;
            }
        }
        if(odd_mismatch!=even_mismatch){
            cout<<-1<<endl;
        }
        else
        {
            cout<<even_mismatch<<endl;
        }
    }
    return 0;
}
