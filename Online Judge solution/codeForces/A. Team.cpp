#include<iostream>
using namespace std;
int Equal(int x,int y)
{
    if(x==1 && y==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,s=0;
    int a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(Equal(a,b)==1)
        {
            s++;
        }
        else if(Equal(c,b)==1)
        {
            s++;
        }
        else if(Equal(a,c)==1)
        {
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
