#include<bits/stdc++.h>
#define endl '\n'
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
    FastIO;
//    freopen("1166.txt","r",stdin);
    int a[101],b[101];
    memset(a,0,sizeof(a)/sizeof(a[0]));
    memset(b,0,sizeof(b)/sizeof(b[0]));

    //take input
    int tc,ncase=0;
    cin>>tc;
    while(tc--)
    {
        int n,ncount=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        //finding sort permutation array

        for(int j=0; j<n; j++)
        {

            for(int i=1; i<=n; i++)
            {
                if(a[i]!=i)
                {
                    swap(a[i],a[a[i]]);
                    ncount++;
                }
            }
        }
        //check array sort or not
        printf("Case %d: %d\n",++ncase,ncount);
    }
    return 0;
}
