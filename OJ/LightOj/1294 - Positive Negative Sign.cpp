#include<iostream>
using namespace std;

int main()
{
    long long n,m,a;
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>n>>m;
        a=(n*m)/2;
        if(n%(2*m)==0)
        {
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<0<<endl;
        }

    }
    return 0;
}
