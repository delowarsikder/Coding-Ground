///ac
#include<bits/stdc++.h>
using namespace std;

int arr[101];
vector<int>v;
int n,m,d,a,k;
int add(int);
int multiply(int);
int division(int);

int main()
{
     //freopen("1133_input.txt","r",stdin);
    int  caseno = 0, cases;
    string l;
    cin>>cases;
    while( cases-- )
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        while(m!=0)
        {
            cin>>l;
            if(l=="S")
            {
                cin>>d;
                add(d);
            }
            else if(l=="M")
            {
                cin>>d;
                multiply(d);
            }
            else if(l=="D")
            {
                cin>>k;
                division(k);
            }
            else if(l=="R")
            {
                reverse(v.begin(),v.end());
            }
            else if(l=="P")
            {
                int temp,y,z;
                cin>>y>>z;
                temp=v[y];
                v[y]=v[z];
                v[z]=temp;
            }
            m--;
        }
        printf("Case %d:\n",++caseno);
        for(int k=0; k<n; k++)
        {
            if(k==n-1)
            {
                cout<<v[k];
            }
            else
            {
                printf("%d ",v[k]);
            }
        }
        cout<<endl;
        v.erase(v.begin(),v.end());
    }

    return 0;
}
int add(int d)
{
    for(int j=0; j<n; j++)
    {
        v[j]+=d;
    }
}

int multiply(int d)
{

    for(int j=0; j<n; j++)
    {
        v[j]*=d;
    }
}
int division(int k)
{

    for(int j=0; j<n; j++)
    {
        v[j]/=k;
    }
}
