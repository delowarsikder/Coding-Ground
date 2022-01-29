#include<bits/stdc++.h>
using namespace std;

int arr[100];
int fibonacci(int n)
{
    if (n==0 || n==1){
        return 1;
    }
    else if(arr[n]==0){
        arr[n]=fibonacci(n-1)+fibonacci(n-2);
    }/*
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }*/
    return arr[n];
}

int main()
{
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int a=fibonacci(n);
    cout<<"value :"<<a<<endl;
}
