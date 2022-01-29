#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int a[100];
    int n,mid,low,high;
    cout<<"Enter the number of element :"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" element :"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Output :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    //sorted
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Output after sorted :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    low=0;
    high=n-1;
    mid=(high+low)/2;
    int item;
    cout<<"Enter search item :"<<endl ;
    cin>>item;
    while(low<=high && a[mid]!=item)
    {
        mid=(high+low)/2;
        if(a[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if (a[mid]==item)
    {
        cout<<"Search item is found !"<<endl;
        cout<<"item index :"<<mid<<endl;
    }
    else
    {
        cout<<"Search item is not found !"<<endl;
    }

    return 0;
}

