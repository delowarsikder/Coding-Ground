#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int n,m;
    while(tc--) {
        cin>>n>>m;
        cout<<min(n-1,2)*m<<endl;
    }
    return 0;
}
