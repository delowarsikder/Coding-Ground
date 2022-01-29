#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10000;
    vector<int>arr;
    int k=19;
    int cnt=0;
   while(1)
    {
        int m=k;
        int x=0;
        while(m!=0)
        {
            x+=m%10;
            m/=10;
        }
        if(x==10 && cnt<=n)
        {
            arr.push_back(k);
            cnt++;
        }
        k+=9;
        if(cnt>n){
            break;
        }
    }

    int tc;
    cin>>tc;
    cout<<arr[tc-1]<<endl;

    return 0;
}
