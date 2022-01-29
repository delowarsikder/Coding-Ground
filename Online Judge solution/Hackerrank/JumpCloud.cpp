#include <bits/stdc++.h>
using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k)
{
    int res=100;
    int n=c.size();
    bool visited[n]= {false};

    /*   cout<<"visit array:"<<endl;
       for(int i=0; i<n; i++)
       {
           cout<<visited[i]<<" ";
       }
       cout<<endl;

       cout<<"vector size : "<<n<<endl;
       cout<<"c vector"<<endl;
       for(int i=0; i<n; i++)
       {
           cout<<c[i]<<endl;
       }*/

       int id=0;
    while(true)
    {
         id=(id+k)%n;
//        cout<<"id :"<<id<<endl;
        if(visited[id])
        {
            break;
        }
        if(c[id]==0)
        {
            res-=1;
        }
        else if (c[id]==1)
        {
            res-=3;
        }
        visited[id]=true;
//        cout<<"res : "<<res<<endl;
    }
    return res;

}

int main()
{
    int tc;
    cin>>tc;
    int k;
    cin>>k;
    vector<int>c;
    int temp;
    while(tc--)
    {
        cin>>temp;
        c.push_back(temp);
    }
    int ans=jumpingOnClouds(c,k);
    cout<<ans<<endl;
    return 0;
}
