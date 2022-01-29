#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FastIO ios_base::sync_with_stdio(false);cin.tie(0);
vector<int>v;
int main()
{
   // freopen("1214_input.txt","r",stdin);
    //freopen("output-1214.txt","w",stdout);
    //FastIO;
    int caseno=0,cases;
    string a;
    ll b,x,flag;
    cin>>cases;
    while(cases--)
    {
        int m=0;
        cin>>a>>b;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='-')
            {
                continue;
                // m=1;
            }
            else
            {
                v.push_back(a[i]-'0');
                //cout<<"else push in vector"<<endl;
            }

        }
        x=0;
        flag=0;
        printf("Case %d: ",++caseno);
        for(int i=0; i<v.size(); i++)
        {
            x=x*10+v[i];
            x=x%b;
            if(x==0 && i==(v.size()-1))
            {
                cout<<"divisible"<<endl;
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            cout<<"not divisible"<<endl;
        }
        v.erase(v.begin(),v.end());
    }
    return 0;
}
