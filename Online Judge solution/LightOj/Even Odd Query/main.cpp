#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>arr;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    int temp;
    while(tc--)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int query;
    cin>>query;
    while(query--)
    {
        int m,n;
        cin>>m>>n;
        m=m-1;
        n=n-1;
        if(arr[n]==0 && n!=m)
        {
            cout<<"Odd"<<endl;
        }
        else if(arr[m]%2==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }
    }

    return 0;
}
