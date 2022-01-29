///select language ; C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
///compiler error
///code  https://paste.ubuntu.com/p/gdvtjZnKc5/
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int s1,s2,d1,d2,m1,m2,h1,h2;
int integer(string);
int arr[100],j=0;

int main()
{
    int d,h,m,s;
    string line;
    for(int i=0; i<4; i++)
    {
        getline(cin,line);
        integer(line);
    }
    d1=arr[4];
    d2=arr[0];
    h1=arr[5];
    h2=arr[1];
    m1=arr[6];
    m2=arr[2];
    s1=arr[7];
    s2=arr[3];

    if(s1<s2)
    {
        s=s1+60-s2;
        m1-=1;
    }
    else
    {
        s=s1-s2;
    }
    if(m1<m2)
    {
        m=m1-m2+60;
        m1-=1;
    }
    else
    {
        m=m1-m2;
    }
    if(h1<h2)
    {
        h=h1-h2+24;
        d1-=1;
    }
    else
    {
        h=h1-h2;
    }
    d=d1-d2;


    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
    return 0;

}

integer(string line)
{
    string dummy;
    int val;
    stringstream ss;
    ss<<line;
    while(!ss.eof())
    {
        ss>>dummy;
        if(stringstream(dummy)>>val)
        {
            arr[j]=val;
            j++;
        }
    }
}
