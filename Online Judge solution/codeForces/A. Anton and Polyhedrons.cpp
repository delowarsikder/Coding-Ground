#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    string s;
    ll _counter=0;
    while(tc--)
    {
        cin>>s;
        if (s=="Tetrahedron")
        {
            _counter+=4;
        }
        else if(s=="Cube")
        {
            _counter+=6;
        }
        else if(s=="Octahedron")
        {
            _counter+=8;
        }
        else if(s=="Dodecahedron")
        {
            _counter+=12;
        }
        else if(s=="Icosahedron")
        {
            _counter+=20;
        }
    }
    cout<<_counter<<endl;
    return 0;
}
