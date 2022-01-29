#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    vector<int>v;
    cin>>n>>x;
    while(n--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int _size=v.size();
    int s=0;
    for(int i=0; i<_size; i++)
    {
        if(i&1)
        {
            s+=v[i]-1;
        }
        else
        {
            s+=v[i];
        }
    }
    if(s<=x)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
