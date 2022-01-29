#include<bits/stdc++.h>
using namespace std;
#define mx 10001
//#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
//    FastIO;
    freopen("subsequence.txt","r",stdin);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int a[1001],b[1001],c[1001];
//        memset(a,0,mx);
//        memset(b,0,mx);
//        memset(c,0,mx);
        //input in array a
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        //input in array b
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
//finding a subsequence
        int t[101][101];
        int k=0;
        int count=0;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(a[i-1]==b[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                    c[k]=t[i][j];
                    flag=true;
                    k++;
                    count++;
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                    c[k]=t[i][j];
                    flag=true;
                    k++;
                    count++;
                }

            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++){
                cout<<c[i]<<" ";
            }
//            cout<<count<<" "<<c[k-1]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
cout<<endl;
    }
    return 0;
}
