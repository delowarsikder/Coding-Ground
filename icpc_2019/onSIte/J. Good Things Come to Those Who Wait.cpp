#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s;
vector<int>v;
int main()
{
    int tc,tc2;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        ll a;
        cin>>tc2;
        if(tc2==1)
        {
            cin>>a;
            cout<<"Case "<<i<<": "<<a*a<<endl;
            continue;
        }
        else
        {
            s=1;
            while(tc2--)
            {
                cin>>a;
                v.push_back(a);
            }
            for(int k=0;k<v.size();k++)
            {
                s*=v[k];
            }
            cout<<"Case "<<i<<": "<<s<<endl;
            v.clear();
        }
    }
    return 0;
}
