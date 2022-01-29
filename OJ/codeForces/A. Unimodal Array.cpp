#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    int n,val;
    cin>>n;
    cin>>arr[0];
    bool flag=false;
    for(int i=1; i<n; i++)
    { 12211
        cin>>arr[i];
        if(arr[i]>arr[i-1]){
            flag=false;
        }
        else{
             flag=true;
        }
    }
    return 0;
}
