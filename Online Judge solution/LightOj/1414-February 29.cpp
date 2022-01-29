#include <bits/stdc++.h>
using namespace std;

#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
bool leafYear(ll y)
{
    if(y%400==0)
    {
        return true;
    }
    else if (y%100==0 )
    {
        return false;
    }
    else if( y%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{
    FastIO;
    ll tc;

    string month[]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    map<string,int>mp_month;
    ll len=sizeof(month)/sizeof(string);
    for(int i=0; i<len; i++)
    {
        mp_month[month[i]]=i;
    }

    string initialDate, endDate;
    string iMonth, eMonth;
    ll iDay, eDay, iYear, eYear;
    cin>>tc;
    ll caseNo=0;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<": ";

        getline(cin, initialDate);
        getline(cin, endDate);
        stringstream ssi(initialDate),sse(endDate);
        char coma;
        ssi>>iMonth>>iDay>>coma>>iYear;
        sse>>eMonth>>eDay>>coma>>eYear;
//    cout<<"Month: "<<iMonth<<endl<<" DAy : "<<iDay<<endl<<" year : "<<iYear<<endl;

        if(mp_month[iMonth]>1) // start with march
        {
            iYear=iYear+1;
        }

        //ending date
        if((mp_month[eMonth]==1 && eDay<29) || mp_month[eMonth]==0)
        {
            eYear=eYear-1;
        }
        int cnter=0;
        ll mul_4=eYear/4-(iYear-1)/4;
        ll mul_400=eYear/400-(iYear-1)/400;
        ll mul_100=eYear/100-(iYear-1)/100;
        cnter=mul_4+mul_400-mul_100;
        cout<<cnter<<endl;
    }


    return 0;
}
