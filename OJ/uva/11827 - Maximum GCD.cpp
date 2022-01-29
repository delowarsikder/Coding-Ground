#include<bits/stdc++.h>
using namespace std;
#define mx 1000
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(a==0)
    {
//        cout<<b<<endl;
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    FastIO;
//    freopen("11827.txt","r",stdin);
    ll tc;
    cin>>tc;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(tc--)
    {
        ll n=0;
        ll arr[mx];
        memset(arr,-1,sizeof(arr)/sizeof(arr[0]));
        ll i=0;
        string s;
        getline(cin,s);
        stringstream ss(s);

        while(ss>>n)
        {
            arr[i]=n;
            i++;
        }
//        cout<<"print all line :"<<endl;
//        for(int p=0;p<i;p++){
//            cout<<arr[p]<<" ";
//        }
        ll maxGcd=0;
        for(ll j=0; j<i; j++)
        {
            for(ll k=j+1;k<i; k++)
            {
                maxGcd=max(maxGcd,gcd(abs(arr[j]),(abs(arr[k]))));
            }
//           cout<<arr[j]<<" ";

        }
        cout<<maxGcd<<endl;
    }

    return 0;
}

