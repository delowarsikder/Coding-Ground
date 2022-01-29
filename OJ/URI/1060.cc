#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,f;
    int s=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0)
    {
        s++;
    }
    if(b>0)
    {
        s++;
    }
    if(c>0)
    {
        s++;
    }
    if(d>0)
    {
        s++;
    }
    if(e>0)
    {
        s++;
    }
    if(f>0)
    {
        s++;
    }

    printf("%d valores positivos\n",s);
    return 0;
}
