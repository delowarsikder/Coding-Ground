#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,x=0;
    string n;
    cin>>n;
    cout<<"n :"<<n<<endl;
    int l=n.size();
    cout<<" l :"<<l<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<n[i]<<endl;
    }
int a=n[l-1]-'0';
cout<<"a :"<<a<<endl;
}
