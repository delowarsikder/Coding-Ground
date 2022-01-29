#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define gcd(x,y) __gcd(x,y)
#define minimum(x,y,z) min(x,min(y,z))

bool cmp(map<int,int>&p,map<int,int>&q)
{
    if(p.second<q.second)
    {
        return true;
    }

}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
//    for(auto &it:arr)
//    {
//        cin>>it;
//    }

    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[i]=arr[i];
    }

//    sort(mp.begin(),mp.end(),cmp);



    int one=0,two=0,three=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==1)
        {
            one++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
        else if(arr[i]==3)
        {
            three++;
        }
    }

    int team=minimum(one,two,three);
    cout<<"team:"<<team<<endl;

    return 0;
}
