#include<iostream>
#include<map>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a[100];
    cout<<"Enter your number :"<<endl;
    cin>>n;
    ll x=0,i=0,s=0,m=0;
    while(n!=0)
    {
        x=n%10;
        m=m*10+x;
        n/=10;
        s++;
    }

    while(m!=0)
    {
        x=m%10;
        m/=10;
        a[i]=x;
        i++;
    }
    system("cls");
    cout<<"Output :"<<endl;
    for (ll i=0; i<s; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    system("pause");
    return 0;
}

