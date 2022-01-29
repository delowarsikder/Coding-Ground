#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,caseno=0;
    cin>>cases;
    string n;
    int flag;
    while(cases--)
    {
        flag=0;
        cin>>n;
        int l=n.size();
        if(l==1)
        {
            flag=1;
//            printf("Case %d: ",++caseno);
//            cout<<"Yes"<<endl;
        }
        else
        {
            for(int i=0; i<n.size()/2; i++)
            {
                //cout<<"value l in loop"<<l<<endl;
                if(n[i]==n[--l])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        printf("Case %d: ",++caseno);
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}



/*5

1

21

16161

523125

0*/
