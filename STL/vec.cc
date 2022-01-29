#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int main()
{
    //declaration style
    vector<int>v1;
    cout<<"vector size :"<<v1.size()<<endl;
    vector<int>v2(4,100);
    vector<int>v3(v2.begin(),v2.end());
    vector<int>v4(v3);
    int arr[4] = {2,3,4,5};
    vector<int>v5(arr,arr+sizeof(arr)/sizeof(int));
//    cout<<"value :"<<v3[0]<<endl;
//    cout<<"index :"<<sizeof(arr)<<endl;
    /*for(unsigned i =0; i<v5.size(); i++)
    {
        cout<<v5[i]<<" ";
    }*/

    vector<int>vec[100];
    vec[0]=v5;
    /*cout<<"print vec :"<<endl;
    for (int i=0; i<vec[0].size(); i++)
    {
        cout<<vec[0][i]<<" ";
    }*/
    vector<int>vec1(100);

    return 0;
}
