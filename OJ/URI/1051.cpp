//ac
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float s,sum=0;
    cin>>s;
    int n,m;
    if(s<=2000)
    {
        cout<<"Isento"<<endl;
    }
    else if(s>2000)
    {
        s=s-2000;
        if(s<=1000)
        {
            sum+=s*.08;
        }
        else
        {
            s=s-1000;
            sum+=1000*.08;
            if(s<=1500)
            {
                sum+=s*.18;
            }
            else
            {
                s=s-1500;
                sum+=1500*.18+s*.28;

            }
        }
        cout<<setw(2)<<setprecision(2)<<setiosflags(ios::fixed)<<"R$ "<<sum<<endl;
    }

}
