#include<bits/stdc++.h>
using namespace std;
int size_a=4;
int size_b=4;

int *SortArray(int a[],int b[],int size_a,int size_b)
{
    int i=0,j=0,k=0;
    int stor[size_a+size_b+1];

    while(i<size_a && j<size_b)
    {
        if(a[i]<b[j])
        {
            stor[k++]=a[i++];
        }
        else
        {
            stor[k++]=b[j++];
        }
    }

    while(i<size_a)
    {
        stor[k++]=a[i++];
    }
    while(j<size_b)
    {
        stor[k++]=b[j++];
    }
    return stor;
}

int main()
{
    int a[]= {1,7,8,9};
    int b[]= {2,3,5,10};
   int *stor= SortArray(a,b,size_a,size_b);

   cout<<"sorted array"<<endl;
    for(int i=0; i<(size_a+size_b-1); i++)
    {
        cout<<*(stor+i)<<" ";
    }
    cout<<endl;

    return 0;
}
