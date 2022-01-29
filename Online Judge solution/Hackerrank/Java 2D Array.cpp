#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6]= {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };


    int sum=0;
    int mx=INT_MIN;
    int k=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"Counter: "<<++k<<endl;
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            mx=max(sum,mx);
            cout<<arr[i][j]<<" "<<arr[i][j+1]<<" "<<arr[i][j+2]<<endl<<" "<<arr[i+1][j+1]<<endl<<arr[i+2][j]<<" "<<arr[i+2][j+1]<<" "<<arr[i+2][j+2]<<endl;
            cout<<endl<<"sum: "<<sum<<endl;
        }

        cout<<endl<<endl;
    }
    cout<<"mx: "<<mx<<endl;
    return 0;
}
