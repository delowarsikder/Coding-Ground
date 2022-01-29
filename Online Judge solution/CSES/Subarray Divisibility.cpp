#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    ll track=0,cnt=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];

//3 1 2 7 4
//3 1 2 7 5

        while(sum>=n)
        {
//            cout<<"Sum :" <<sum<<endl;
            if(sum%n==0){
                cnt++;
//                break;
            }
            sum-=v[track++];
        }

    }

    cout<<cnt<<endl;
    return 0;
}

