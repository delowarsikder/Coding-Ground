#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

typedef pair<int,int>pii;

vector<pii>v;

bool cmp(pii A,pii B)
{
    return A.second*B.first>B.second*A.first;
}

void fractional_knapsack()
{
    int n,w;
    cout<<"Enter the number of element :"<<endl;
    cin>>n;
    cout<<"Enter "<<n <<" times weight & price :"<<endl;

    for (int i=0; i<n; i++)
    {
        int weight,price;
        cin>>weight>>price;
        v.push_back(pii(weight,price));
    }
    sort(v.begin(),v.end(),cmp);
    cout<<"Enter maximum weight :"<<endl;
    cin>>w;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int z=min(w,v[i].first);
        w=w-z;
        ans=ans+z*v[i].second;

    }
     cout<<"Maximum cost :"<<ans<<endl;
}

int main()
{
    freopen("input.txt","r",stdin);
    fractional_knapsack();
}
