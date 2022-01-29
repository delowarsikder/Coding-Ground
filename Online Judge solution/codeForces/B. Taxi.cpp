#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
//3
//3 3 2
//ex: 3

int main()
{
    FastIO;
    int n;
    int sum=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int carNo=0;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        sum+=arr[i]+arr[j];
        if(sum>4)
        {
            carNo++;
            sum=0;
            j--;
        }
        else if(sum<4)
        {
            i++;
            sum-=arr[j];
        }
        else if(sum==4)
        {
            sum=0;
            carNo++;
            i++;
            j--;
        }
    }
    if(sum!=0)
    {
        carNo++;
    }
    cout<<carNo<<endl;
    return 0;
}
