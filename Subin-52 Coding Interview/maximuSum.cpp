#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-1,-2,1,2,3,-5,4,5};
    int n=sizeof(arr)/sizeof(int);
    int maxSum=INT_MIN,currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<=0){
            currentSum=0;
        }
        if(maxSum<currentSum){
            maxSum=currentSum;
        }
    }
    cout<<"max : "<<maxSum<<endl;
    return 0;
}