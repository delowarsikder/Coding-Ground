#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int q;
    cin>>q;
    int a,b;
    cin>>a>>b;
    a=a-1;
    b=b-1;
    v.erase(v.begin()+(q-1));
    v.erase(v.begin()+a,v.begin()+b);

    size_t _size=v.size();
    cout<<_size<<endl;
    for(int i=0; i<_size-1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[_size-1]<<endl;
    return 0;
}
