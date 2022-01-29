#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,n;
        cin>>m>>n;
        if(m>n)
        {
            swap(m,n);
        }
        int s=0;
        for(int i=m+1; i<n; i++)
        {
            if(i&1)
            {
                s+=i;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

