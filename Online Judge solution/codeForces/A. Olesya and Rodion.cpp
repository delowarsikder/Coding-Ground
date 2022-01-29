#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(),'\n')
int main()
{
    ll n,t;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1<<endl;
    }
    else if(t==10){
        for(int i=0;i<n-1;i++){
            cout<<1;
        }cout<<0<<endl;
    }
    else
    {
        while(n--)
        {
            cout<<t;
        }
        cout<<endl;

    }

    return 0;
}
