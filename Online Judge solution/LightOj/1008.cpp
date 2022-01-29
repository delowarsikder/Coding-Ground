#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

/**sample of square
25,24,23,22,21
10,11,12,12,20
9, 8, 7, 14,19
2,3, 6, 15, 18
1, 4, 5, 16,17
**/
//output (col,row)

int main()
{
    ll tc,Case=0;
    cin>>tc;
    while(tc--)
    {
        ll x;
        cin>>x;
        ll y=ceil(sqrt(x));
        printf("Case %lld: ",++Case);
        //handle 4,16...
        if(y*y==x && x%2!=0)
        {
            cout<<1<<" "<<y<<endl;
        }
        //handle 1,9,25....
        else if(y*y==x && x%2==0)
        {
            cout<<y<<" "<<1<<endl;
        }

        else
        {
            //handle outside edge even square box 5,6,...,8,...
            if(y%2!=0)
            {
                if((x-(y-1)*(y-1))<=y)
                {
                    cout<<y<<" "<<(x-(y-1)*(y-1))<<endl;
                }
                else
                {
                    cout<<y*y-x+1<<" "<<y<<endl;
                }
            }
            //handle outside edge odd square box 10,11,...,15,...
            else
            {
                ll p=sqrt(x);
                if((x-p*p)<=(p+1))
                {
                    cout<<x-p*p<<" "<<(p+1)<<endl;
                }
                else
                {
                    cout<<(p+1)<<" "<<(p+1)*(p+1)-x+1<<endl;
                }
            }
        }
    }


    return 0;
}
