#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
vector<int> v;
int main()
{
    int m,n;
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n==0){
            cout<<n<<endl;
        }
        while(n!=0)
        {
            int t=n%10;

            if(n>=10)
            {
                cout<<t<<" ";
            }
            else
            {
                cout<<t<<endl;
            }
            n/=10;
        }
    }
    return 0;
}


