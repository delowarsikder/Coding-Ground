#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        vector<int>blackHole;
        ll blank=0;
        for(auto s:str)
        {
            if(s=='0')
            {
                blank++;
            }
            else
            {
                blackHole.push_back(blank);
                blank=0;
            }
        }
        blackHole.push_back(blank);
        cout<<"black hole : ";
        for(auto b: blackHole)
        {
                cout<<b<<" ";
        }
        cout<<endl;
    }

    return 0;
}
