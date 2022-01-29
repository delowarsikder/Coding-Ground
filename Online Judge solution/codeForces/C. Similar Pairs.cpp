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
        ll odd_count=0;
        ll even_count=0;
        for(auto &it:arr)
        {
            cin>>it;
            if(it%2==0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        sort(arr.begin(),arr.end());
//    cout<<"ans : ";
        if(odd_count%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool flag=false;
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]%2==0 && arr[i+1]%2!=0)
                {
                    if(abs(arr[i]-arr[i+1])==1)
                    {
                        cout<<"YES"<<endl;
                        flag=true;
                        break;
                    }
                }
                else if(arr[i]%2!=0 && arr[i+1]%2==0)
                {
                    if(abs(arr[i]-arr[i+1])==1)
                    {
                        cout<<"YES"<<endl;
                        flag=true;
                        break;
                    }
                }
            }
            if(!flag)
            {
                cout<<"NO"<<endl;
            }
        }


    }

    return 0;
}
