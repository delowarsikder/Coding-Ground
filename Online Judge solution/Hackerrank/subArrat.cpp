#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1,2,3};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

