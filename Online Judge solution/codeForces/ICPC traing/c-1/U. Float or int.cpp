#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    double d;
    cin>>d;
    int temp=int(d);
    if(!(d-temp))
    {
        cout<<"int "<<temp<<endl;
    }
    else{
        cout<<"float "<<temp<<" "<<d-temp<<endl;
    }

    return 0;
}
