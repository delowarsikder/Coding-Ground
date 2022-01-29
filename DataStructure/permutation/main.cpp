#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define mx 100005
#define mod 1e9+7
typedef vector<ll> vi;
vi permutation;
bool chosen[mx]= {false};
ll n;
ll print()
{
    for(int i=0; i<permutation.size(); i++)
    {
        cout<<permutation[i]<<" ";
    }
    cout<<endl;
}
ll _search()
{
    cout<<"search call "<<endl;
    if(permutation.size()==n)
    {
        cout<<"cycle :"<<endl;
        REP(i,0,n-1)
        {
            cout<<permutation[i]<<" ";
        }
        cout<<permutation[n-1]<<endl;

    }
    else
    {
        REP(i,0,n)
        {
            if(chosen[i])
            {
                continue;
            }
            permutation.push_back(i+1);
            chosen[i]=true;
            cout<<" above seach i: "<<i<<endl;
            _search();
            cout<<" below seach i: "<<i<<endl;
            chosen[i]=false;
            cout<<"print before pop back():"<<endl;
            print();
            permutation.pop_back();
            cout<<"print after pop back:"<<endl;
            print();

        }
    }
}

int main()
{
//    cin>>n;

    n=2;
    _search();
    return 0;
}
