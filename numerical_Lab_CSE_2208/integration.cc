#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int cou=0;
    float x,y,sum=0;
    for (x=4; x<=5; x=x+0.2)
    {
        sum=sum+log(x);
        cout<<"x :"<<x<<endl;
        cou++;
    }
    cout<<"Sum :"<<sum<<endl<<"count :"<<cou<<endl;
    y=log(4)+log(5.2);

    printf("sum = %.7f\n",sum);
    cout<<"l1 :"<<y<<endl;
    return 0;
}

