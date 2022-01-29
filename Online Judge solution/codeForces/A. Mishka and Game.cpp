#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    ll m_cnt=0,n_cnt=0;
    while(tc--)
    {
        ll m,n;
        cin>>m>>n;
        if(m>n)
        {
            m_cnt++;
        }
        else if(m<n)
        {
            n_cnt++;
        }
    }
    if(m_cnt==n_cnt)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(m_cnt>n_cnt)
    {
        cout<<"Mishka"<<endl;
    }
    else if(n_cnt>m_cnt)
    {
        cout<<"Chris"<<endl;
    }
    return 0;
}
