#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int item,q;
    float s;
    cin>>item>>q;
    switch(item)
    {
    case 1:
        s=q*4;
        printf("Total: R$ %.2f\n",s);
        break;
    case 2:
        s=q*4.5;
        printf("Total: R$ %.2f\n",s);
        break;
    case 3:
        s=q*5;
        printf("Total: R$ %.2f\n",s);
        break;
    case 4:
        s=q*2;
        printf("Total: R$ %.2f\n",s);
        break;
    case 5:
        s=q*1.5;
        printf("Total: R$ %.2f\n",s);
        break;
    }
    return 0;
}
