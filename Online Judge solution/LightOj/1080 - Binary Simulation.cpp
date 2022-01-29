#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maxVal 100005
#define ms(a,b) memset(a,b,sizeof(a))
#define caseNo(x) cout<<"Case "<<x<<":"<<endl
typedef long long ll;

int tree[maxVal];
string s;

ll len;

int query(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=tree[x];
        x-=(x&-x);
    }
    return sum;
}

int update(int idx,int val)
{
    while(idx<=len)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }

}

int main()
{
    FastIO;
//    freopen("input_1080.txt","r",stdin);
    int tc,Case=0;
    cin>>tc;
    for(ll pos=1; pos<=tc; pos++)
    {
        ms(tree,0);
        int q;
        cin>>s>>q;
        len=s.length();
//        printf("Case %d:\n",++Case);
        caseNo(pos);
        while(q--)
        {
            char t;
            int i,j;
            cin>>t;
            switch(t)
            {
            case 'I':
                cin>>i>>j;
                update(i,1);
                update(j+1,-1);
                break;

            case 'Q':
                cin>>i;
                int ans=query(i);
                if(ans%2)//update odd time
                {
                    if(s[i-1]=='0')
                    {
                        cout<<'1'<<endl;
                    }
                    else
                    {
                        cout<<'0'<<endl;
                    }

                }
                else
                {
                    cout<<s[i-1]<<endl;

                }
                break;
            }
        }

    }

    return 0;

}

