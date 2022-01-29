#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int w,x,y,z;
    int a,b,c;
    cin>>w>>x>>y>>z;
    arr[0]=w;
    arr[1]=x;
    arr[2]=y;
    arr[3]=z;
    sort(arr,arr+4);
    a=arr[3]-arr[0];
    b=arr[3]-arr[1];
    c=arr[3]-arr[2];
    cout<<a<<endl<<b<<endl<<c<<endl;
}
