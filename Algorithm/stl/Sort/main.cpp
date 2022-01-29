#include<iostream>
#include<algorithm>
#include<stdlib.h>
//#include<fstream>
using namespace std;

int arr[100],n;
vector<int>v;

class student
{
    public:
    int id,merit;
    string name;
    bool operator<(const student& l)
    {
        return l.id>id;
    }
};
student s[10];
/*bool cmp (student & l,student &r)
{
    if(l.id<r.id)
    {
        return l.id<r.id;
    }
    else
    {
        return false;
    }

}*/

int input()
{
    for (int i=0; i<n; i++)
    {
        cin>>s[i].id>>s[i].name>>s[i].merit;
//        arr[i]=rand()%100;
//        v.push_back(arr[i]);
    }
}

int output()
{
    for (int i=0; i<n; i++)
    {
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].merit<<endl;
        //cout<<arr[i]<<endl;
        // cout<<v[i]<<endl;
    }
}


int main()
{
    freopen("input.txt","r+",stdin);
    cin>>n;
    input();
    //sort(arr,arr+n);
    //sort(v.begin(),v.end());

    sort(s,s+n);//sort structure
    output();

    return 0;
}
