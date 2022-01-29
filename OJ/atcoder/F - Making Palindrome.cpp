#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

bool check_palin(string s1)
{
    bool flag=false;
    for(ll i=0,j=s1.size()-1; i<s1.size()/2; i++,j--)
    {
        if(s1[i]==s1[j])
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if (flag){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    string s[n];
    ll c[n];
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    for(ll i=0; i<n; i++)
    {
        cin>>s[i]>>c[i];
    }

    ll _min=INT_MAX;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            if(check_palin(s[i]+s[j]) || check_palin(s[j]+s[i]))
            {
               _min=min(_min,c[i]+c[j]);

            }
        }
    }
    cout<<_min<<endl;

    return 0;
}
