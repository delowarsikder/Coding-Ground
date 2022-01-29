#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input_1305.txt","r",stdin);
//    freopen("output_1305.txt","w",stdout);
    long int ax,ay,bx,by,cx,cy,dx,dy;
    int a,b,area;
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=cx-bx+ax;
        dy=cy-by+ay;
        area=abs(.5*(ax*by+bx*cy+cx*dy+dx*ay-bx*ay-cx*by-dx*cy-ax*dy));
//        a=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
//        b=sqrt((bx-dx)*(bx-dx)+(by-dy)*(by-dy));
//        cout<<"a :"<<a<<endl;
//        cout<<"b : "<<b<<endl;
        printf("Case %d: ",i);
        cout<<dx<<" "<<dy<<" ";
        printf("%d\n",area);

    }
    return 0;
}
