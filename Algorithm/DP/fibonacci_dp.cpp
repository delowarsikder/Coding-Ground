#include<bits/stdc++.h>
using namespace std;
//vector<int>v;
int v[100];
int a;
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
         cout<<"Level "<<n<<": "<<endl;
        return 1;
    }
    else if(v[n]==0)
    {
        v[n]=fibonacci(n-1)+fibonacci(n-2);
        cout<<"Level "<<n<<": "<<v[n]<<endl;
        return v[n];
    }
}
 int main()
 {
     int n;
     cout<<"Enter number of n: ";
     cin>>n;
     a=fibonacci(n);
     cout<<"Your expected fibonacci :"<<a<<endl;
     return 0;
 }
