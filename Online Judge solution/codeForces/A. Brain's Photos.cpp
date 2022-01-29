#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll r,c;
    cin>>r>>c;
    vector<vector<char>>arr(r);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            char ch;
            cin>>ch;
//            cin>>arr[i][j];
            arr[i].push_back(ch);
        }
    }
    bool flag=false;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y')
            {
                flag=true;
                break;
            }
        }
    }

    if(flag)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }

    return 0;
}
