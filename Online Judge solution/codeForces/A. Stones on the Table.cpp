#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count_=0,tc;
    cin>>tc;
    string l;
    cin>>l;
    for (int i=1;i<l.size();i++)
    {
        if(l[i]==l[i-1])
        {
            count_++;
        }
    }
    cout<<count_<<endl;
}
