#include<bits/stdc++.h>
using namespace std;
#define n 101
typedef long long int ll;
int main()
{
    int tc,caseno=0;
    cin>>tc;
    int tc_inner;
    string name[n];
    int v[n];
    string n1;
    int a,b,c;
    while(tc--)
    {
        cin>>tc_inner;
        for(int i=0; i<tc_inner; i++)
        {
            cin>>n1>>a>>b>>c;
            name[i]=n1;
            v[i]=a*b*c;
        }
        int _max=v[0];
        int _min=v[0];
        int tmin=0,tmax=0;
        int flag=1;

        for(int i=1; i<tc_inner; i++)
        {
            if(v[i]>_max)
            {
                _max=v[i];
                tmax=i;
                flag=0;
            }
            else if(v[i]<_min)
            {
                _min=v[i];
                tmin=i;
                flag=0;
            }
        }
        printf("Case %d: ", ++caseno);
        if(flag)
        {
            cout<<"no thief"<<endl;
        }
        else
        {
            cout<<name[tmax]<<" took chocolate from "<<name[tmin]<<endl;
        }
    }

    return 0;
}
