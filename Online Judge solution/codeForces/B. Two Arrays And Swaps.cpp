#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());//acending
        sort(b.begin(),b.end(),greater<int>());//decending

        for(int i=0,j=0; i<n; i++)
        {
            if(a[i]<b[j] && k>0)
            {
                swap(a[i],b[j]);
                j++;
                k--;
            }
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;

    }

    return 0;
}
