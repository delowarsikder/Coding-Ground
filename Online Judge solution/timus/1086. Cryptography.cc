#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
#define pb push_back

typedef long long ll;

int store[mx];
bool mark[mx];
int track=0;

void sieve()
{
//    cout<<"function is called:"<<endl;
    store[track++]=2;
    for(ll i=3; i*i<=mx; i=i+2)
    {
        if(mark[i]==false)//i is prime
        {
            for(int j=i*i; j<=mx; j+=i+i)
            {
                mark[j]=true;//not prime
            }
        }

    }
    for(ll i=3; i<=mx; i=i+2)
    {
        if(!mark[i]) // store prime
        {
            store[track++]=i;
        }
    }
}


int main()
{
//    freopen("crypto.txt","w",stdout);
    ll tc,n;
    sieve();

//    for(int i=1;i<10;i++){
//        cout<<store[i]<<endl;
//    }
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<store[n-1]<<endl;
    }
    return 0;
}
