#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int newLine=0;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string year;
    while(cin>>year)
    {
        if(newLine>0){
            cout<<endl;
        }
        newLine++;
        int len=year.length();
        int leap4=0,leap400=0,leap100=0,m15=0,m55=0;

        for(int i=0; i<len; i++)
        {
            leap4=(leap4*10+(year[i]-'0'))%4;
            leap100=(leap100*10+(year[i]-'0'))%100;
            leap400=(leap400*10+(year[i]-'0'))%400;
            m15=(m15*10+(year[i]-'0'))%15;
            m55=(m55*10+(year[i]-'0'))%55;
        }

        bool leafyear=false;
        bool huluyear=false;
        bool buluku=false;

        if(leap400==0)
        {
            leafyear=true;
        }
        else if(leap100==0)
        {
            leafyear=false;
        }
        else if(leap4==0)
        {
            leafyear=true;
        }

        if(m15==0)
        {
            huluyear=true;
        }
        if(leafyear && m55==0)
        {
            buluku=true;
        }

        if(leafyear)
        {
            cout<<"This is leap year."<<endl;
        }
        if(huluyear)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        if(buluku)
        {
            cout<<"This is bulukulu festival year."<<endl;
        }

        if(!leafyear && !huluyear && !buluku)
        {
            cout<<"This is an ordinary year."<<endl;
        }

    }

    return 0;
}
