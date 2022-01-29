#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1,v2;
    int temp;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i=0; i<m; i++)
    {
        cin>>temp;
        v2.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int i=0,j=0;
    int res=INT_MAX;
    while(i<n && j<m)
    {
        if( abs(v1[i]-v2[j])<res)
        {
            res=abs(v1[i]-v2[j]);
        }
        if(v1[i]<v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout<<res<<endl;

    return 0;
}

