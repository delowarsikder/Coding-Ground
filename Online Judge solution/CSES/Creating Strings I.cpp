#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


int main()
{
    FastIO;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>res;
    do
    {
        res.push_back(s);

    }
    while(next_permutation(s.begin(),s.end()));
    cout<<res.size()<<endl;
    for(auto &x:res)
    {
        cout<<x<<endl;
    }
    return 0;
}

