//wrong

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int t=n-2;
        string s="";
        for(int i=0; i<t; i++)
        {
            s+='a';
        }
        for(int i=t; i<n; i++)
        {
            s+='b';
        }
        int cnt=0;
        do
        {
            cnt++;
            if(cnt==k)
            {
                cout<<s<<endl;
                break;
            }
        }
        while(next_permutation(s.begin(),s.end()));
    }



    return 0;
}
