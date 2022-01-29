#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,a=0,d=0;
    char ch;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        if(ch=='A')
        {
            a++;
        }
        else if(ch=='D')
        {
            d++;
        }
    }
    if (a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<d)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
