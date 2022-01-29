#include<bits/stdc++.h>
using namespace std;

int a[100]={2,3,1,4,7,5,6};
int main(){
    for(int j=0;j<7-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }4
    for(int j=0;j<7;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return 0;
}