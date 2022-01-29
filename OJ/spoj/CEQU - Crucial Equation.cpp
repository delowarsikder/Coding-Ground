
#include<bits/stdc++.h>
using namespace std;
//**
#define For(i,j,n) for(int i=j;i<=n;i++)
#define mst(ss,b) memset(ss,b,sizeof(ss));

typedef  long long LL;

template<class T> void read(T&num)
{
    char CH;
    bool F=false;
    for(CH=getchar(); CH<'0'||CH>'9'; F= CH=='-',CH=getchar());
    for(num=0; CH>='0'&&CH<='9'; num=num*10+CH-'0',CH=getchar());
    F && (num=-num);
}

const int mod=1e9+7;
const double PI=acos(-1.0);
const int inf=1e9;
const int N=1e6+20;
const int maxn=1e3+110;
const double eps=1e-12;



int main()
{
    int tc,_case=0;
    read(tc);
    while(tc--)
    {
        printf("Case %d: ",++_case);

        bool flag=false;
        int a,b,c,m,n;
        cin>>a>>b>>c;
        for(int x=0; x*a<=c; x++)
        {
            if((c-a*x)%b==0)
            {
//            cout<<"Yes"<<endl;
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
