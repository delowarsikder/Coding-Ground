#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
#define mx 1000
int row,col;

ll sum(int a[][10],int b[][10],int r,int c)
{
    if(r!=0)
    {
        a[r][c]=a[r][c]+b[r][c];
        return sum(a,b,r-1,c);
    }
    else if(c!=0)
    {
        a[r][c]=a[r][c]+b[r][c];
        return sum(a,b,r,c-1);
    }
    if(r==0 && c==0)
    {
        a[r][c]=a[r][c]+b[r][c];

        for(ll i=0; i<row; i++)
        {
            for(ll j=0; j<col; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    FastIO;

    cin>>row>>col;
    int a[100][100],b[100][100];
    for(ll i=0; i<row; i++)
    {
        for(ll j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=0; i<row; i++)
    {
        for(ll j=0; j<col; j++)
        {
            cin>>b[i][j];
        }
    }
    sum(a,b,row,col);
    return 0;
}
