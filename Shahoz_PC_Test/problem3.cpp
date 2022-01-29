#include<bits/stdc++.h>
using namespace std;

int Boundary(int startHour,int minDiff)
{
    if(startHour>0 && startHour<=6)
    {
        return minDiff*1;
    }
    else if(startHour>6 && startHour<=12)
    {
        return minDiff*2;
    }
    else if(startHour>12 && startHour<=18)
    {
        return minDiff*3;
    }
    else
    {
        return minDiff*4;
    }
}

int main()
{
    int startDay,startHour,startMin;
    int endDay,endHour,endMin;
    cin>>startDay>>startHour>>startMin>>endDay>>endHour>>endMin;

    if(endDay<startDay)
    {
        cout<<0<<endl;
        return 0;
    }
    int difDay=endDay-startDay;
    int ans=0;
    if(endDay==startDay)
    {
        if(startHour==endHour) //same hours 11 - 11
        {
            if(startMin==endMin)
            {
                ans=0;
            }
            else //different time
            {
                int minDiff=endMin-startMin;
                ans=Boundary(startHour,minDiff);
            }
        }
        //different time
        else
        {
            if(startMin==endMin)
            {
                for(int i=startHour; i<=endHour; i++)
                {
                    ans=ans+Boundary(i,60);
                }
            }else{


            }


        }
    }else{







    }



}

