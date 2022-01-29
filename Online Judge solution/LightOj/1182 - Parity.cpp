#include<iostream>
using namespace std;

int main()
{
    int tc;
    int one,zero,n;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        zero=0;
        one=0;
        cin>>n;
        printf("Case %d: ",i);
        while(n!=0)
        {
            if(n%2==0)
            {
                zero++;
                n/=2;
            }
            else
            {
                one++;
                n/=2;
            }
        }
        if(one%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }

    }
    return 0;
}
