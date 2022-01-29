#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp make_pair
#define total_element 1000

#define Case(x) cout<<"Case "<<x<<": "

int divisor(int n)
{
    ll divisor_no=0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i==n)
        {
            divisor_no++;
        }
        else if(n%i==0)
        {
            divisor_no+=2;

        }
    }
    return divisor_no;
}

bool comp( const pair<int,int>&x,const pair<int,int>&y)
{
    if(x.second==y.second)
    {
        return x.first>y.first;
    }
    else
    {
        return x.second<y.second;
    }
}

int main()
{
    FastIO;
    vector<pair<int,int>>divisor_sort;
    ll tc;
    for(int i=1; i<=total_element; i++)
    {
        divisor_sort.pb(mp(i,divisor(i)));
    }

    sort(divisor_sort.begin(),divisor_sort.end(),comp);

    cin>>tc;
    ll caseNo=0;
    while(tc--){
        Case(++caseNo);
        ll x;
        cin>>x;
        cout<<divisor_sort[x-1].first<<endl;

    }

//    for(int i=0; i<divisor_sort.size(); i++)
//    {
//        cout<<divisor_sort[i].first<<"->"<<divisor_sort[i].second<<endl;
//    }


    return 0;
}
