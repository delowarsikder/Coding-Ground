#include<iostream>
using namespace std;

int used[100]={0},number[100];
void permutation(int at,int n)
{
    if(at==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            used[i]=1;
            number[at]=i;
            permutation(at+1,n);
            used[i]=0;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter how many number :"<<endl;
    cin>>n;
    permutation(1,n);
}
