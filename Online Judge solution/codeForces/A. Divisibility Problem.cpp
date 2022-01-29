#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int mov=0;
        if(a%b==0){
            mov=0;
        }
        else{
            mov=b-(a%b);
        }
        cout<<mov<<endl;
    }
    return 0;
}
