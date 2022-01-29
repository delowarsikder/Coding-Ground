#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1,2,2,3,3,5,5};
    int n=sizeof(arr)/sizeof(int);
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    //find unique element
    int cnt=0;
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[++j]=arr[i+1];
        }
    }
    //
    cout<<"number of unique element: "<<j<<endl;
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
