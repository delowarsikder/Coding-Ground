#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<int>arr(n);
    int cnt=1;
    int best=1;
    cin>>arr[0];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            cnt++;
            best=max(best,cnt);
        }
        else
        {
            best=max(best,cnt);
            cnt=1;
        }
    }
    cout<<best<<endl;

}

