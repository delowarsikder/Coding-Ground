#include<iostream>
using namespace std;
///don't complete
int main()
{
    int n;
    cout<<"Enter size of piramid :"<<endl;
    cin>>n;
    for(int i=0; i<=n/2; i++)
    {
        for (int j=i; j<n/2; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<2*(i+1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
