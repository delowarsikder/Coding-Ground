#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    temp=n;
    bool flag=false;
    while(temp!=0)
    {
        int x=temp%10;
        temp=temp/10;
        if(x==4 || x==7)
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
