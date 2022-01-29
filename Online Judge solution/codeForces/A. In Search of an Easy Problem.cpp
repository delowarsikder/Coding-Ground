#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n;
    cin>>n;
    bool flag=false;
    int temp;
    while(n--)
    {
        cin>>temp;
        if(temp==1)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
