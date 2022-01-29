//done
#include<bits/stdc++.h>
using namespace std;
vector<int>arr;

int print()
{

//
    cout<<"print:"<<endl;

    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
}
int Getfiltered(int skip,int pageSize,int pageNumber,int sortOrder)
{
    if(sortOrder==0)
    {
        sort(arr.begin(),arr.end());
    }
    else
    {
        sort(arr.begin(),arr.end(),greater<int>());
    }

//print();

    int nextSize=arr.size()-skip;
//    cout<<"Next size:"<<nextSize<<endl;
    int p=ceil(double(nextSize)/double(pageSize));
//    cout<<"p :"<<p<<endl;
    if(pageNumber>p)
    {
        cout<<"No Data"<<endl;
    }
    else
    {
        int start=skip+(pageSize)*(pageNumber-1);
        for(int i=start; i<start+pageSize; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    freopen("input.txt","r",stdin);
    int skip,pageSize,PageNumber,sortOrder;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
//print();

    cin>>skip>>pageSize>>PageNumber>>sortOrder;
    Getfiltered(skip,pageSize,PageNumber,sortOrder);

    return 0;
}
