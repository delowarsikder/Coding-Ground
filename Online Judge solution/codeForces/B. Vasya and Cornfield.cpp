#include<bits/stdc++.h>
using namespace std;

int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    return abs((x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1));//not need divided by 2 -- because both side same operation
}

int main()
{
    int n,d;
    cin>>n>>d;
    int tc;
    cin>>tc;
    int rec_area1=area(0,d,n,n-d,n-d,n);
    int rec_area2=area(0,d,d,0,n,n-d);
    int rec_area=rec_area1+rec_area2;

//    cout<<"rec_area :"<<rec_area<<endl;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        int pab=area(x,y,0,d,d,0);
        int pbc=area(x,y,d,0,n,n-d);
        int pcd=area(x,y,n,n-d,n-d,n);
        int pad=area(x,y,n-d,n,0,d);

        int total_area=pab+pbc+pcd+pad;

//        cout<<"pab :"<<pab<<endl;
//        cout<<"pbc :"<<pbc<<endl;
//        cout<<"pcd :"<<pcd<<endl;
//        cout<<"pad :"<<pad<<endl;
//        cout<<"total_area:"<<total_area<<endl;

        if(total_area==rec_area)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
