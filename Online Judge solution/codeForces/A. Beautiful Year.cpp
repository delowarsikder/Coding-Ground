#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int distinc_check(int n)
{
    set<int>st;
    int temp=n;
    while(temp!=0)
    {
        int x=temp%10;
        st.insert(x);
        temp=temp/10;
    }
    if(st.size()==4)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    FastIO;
    ll n;
    cin>>n;
    n=n+1;
    while(1)
    {
        if(distinc_check(n))
        {
            cout<<n<<endl;
            break;
        }
        n++;
    }

    return 0;
}



