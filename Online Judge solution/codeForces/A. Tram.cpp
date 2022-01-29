#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
    FastIO;
    int n;
    int a,b;
    int capacity=0;
    cin>>n;
    int stor=0;
    while(n--)
    {
        cin>>a>>b;
        capacity=capacity+b-a;
        stor=max(stor,capacity);


    }
    cout<<stor<<endl;

    return 0;
}
