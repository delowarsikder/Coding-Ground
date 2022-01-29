#include<bits/stdc++.h>
using namespace std;

#define FastIo ios::sync_with_stdio(0);//cin.tie(0)
#define mx 100005

int main()
{
    FastIo;
    int tc,Case=0;
    cin>>tc;

    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int arr[m];
        for(int i=0; i<m; i++)
        {
            cin>>arr[i];
        }
        //sort array
        sort(arr,arr+sizeof(arr)/sizeof(arr[0]));
        //check divisible time
        for(int i=arr[0]; i<=arr[m]; i++)
        {
            if(n%i==0)
            {
                cout<<"expected value:"<<i<<endl;
                break;
            }
        }
        //print
//        cout<<"print:"<<endl;
//        for(int i=0; i<m; i++)
//        {
//            cout<<arr[i]<<endl;
//        }
    }
    return 0;
}

