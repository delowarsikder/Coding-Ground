#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mh,mm,ms;
    cin>>mh>>mm>>ms;
    cout<<"mirror Time: "<<endl;
    cout<<mh<<":"<<mm<<":"<<ms<<endl;
    cout<<"Actual time: "<<endl;
//
    int actualHous=12-mh;
    int actualMin=60-mm;
    int actualSecond=60-ms;



    if(mm==0)
    {
        if(ms==0)
        {
            cout<<actualHous<<":"<<actualMin<<":"<<actualSecond<<endl;
        }
        else
        {
            cout<<actualHous<<":"<<(60+actualMin-1)%60<<":"<<actualSecond<<endl;
        }
    }
    else
    {
        if(ms==0)
        {
            cout<<(12+actualHous-1)%12<<":"<<actualMin<<endl;

        }
        else
        {
            cout<<(12+actualHous-1)%12<<":"<<(60+actualMin-1)%60<<":"<<actualSecond<<endl;
        }

    }


    return 0;


}
