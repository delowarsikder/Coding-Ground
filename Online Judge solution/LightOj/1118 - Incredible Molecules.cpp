#include<bits/stdc++.h>
#define precision(x)  cout<<setprecision(x)<<setiosflags(ios::fixed);
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    freopen("1118.txt","r",stdin);
    int tc,_case=0;
    scanf("%d",&tc);
    while(tc--)
    {
        printf("Case %d: ",++_case);

        int x1,y1,r1,x2,y2,r2;
//        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);
        double dist=sqrt((x1-x2)*(x1-x2)-(y1-y2)*(y1-y2));
        if((dist>(r1+r2))||dist==(r1+r2))
        {
            cout<<0<<endl;
        }
        else if(dist<=(r1-r2))
        {
            cout<<acos(-1)*r2*r2<<endl;
        }
        else if(dist<=(r2-r1))
        {
            cout<<acos(-1)*r1*r1<<endl;

        }
        else
        {
            //angle of first circle//angle type radian
            double theta1=2*acos((r1*r1+dist*dist-r2*r2)/(2*dist*r1));
            double area1=0.5*r1*r1*(theta1-sin(theta1));
            double theta2=2*acos((r2*r2+dist*dist-r1*r1)/(2*dist*r2));
            double area2=0.5*r2*r2*(theta2-sin(theta2));
//            precision(8);
            printf("%.8lf\n",area1+area2);

//////            double result1=r1*r1*acos((dist*dist+r1*r1-r2*r2)/(2*dist*r1))+r2*r2*acos((dist*dist+r2*r2-r1*r1)/(2*dist*r2));
//////            double result=result1-0.5*sqrt((dist+r1+r2)*(-dist+r1+r2)*(dist-r1+r2)*(dist+r1-r2));
//////            cout<<result<<endl;

////            double d1=(r1*r1-r2*r2+dist*dist)/(2*dist);
////            double d2=(r2*r2-r1*r1+dist*dist)/(2*dist);
////            double area=r1*r1*acos(d1/r1)-d1*sqrt(r1*r1-d1*d1)+r2*r2*acos(d2/r2)-d2*sqrt(r2*r2-d2*d2);
////            cout<<"area :"<<area<<endl;


        }
    }

    return 0;
}

