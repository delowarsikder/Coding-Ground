#include<iostream>
using namespace std;

int main()
{
    int l,b,s=0;
    cin>>l>>b;
    if(l==b)
    {
        cout<<1<<endl;
    }
    else
    {

        while(l<=b)
        {
            l=3*l;
            b=2*b;
            s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
