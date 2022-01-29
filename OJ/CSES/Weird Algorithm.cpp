#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    cout<<n<<endl;
    while(n!=1)
    {

        if(n & 1)
        {
            n=3*n+1;
        }
        else{
            n/=2;
        }
cout<<n<<endl;
    }

    return 0;
}
