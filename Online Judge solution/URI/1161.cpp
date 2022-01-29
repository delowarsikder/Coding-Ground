#include<iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

ll allFact[10001];

int factorial()
{
    allFact[0]=1;
    for (int i=1; i<=20; i++)
    {
        allFact[i]=i*allFact[i-1];
    }
}

int main()
{
    int a,b;
    factorial();
    while(cin>>a>>b)
    {
        cout<<allFact[a]+allFact[b]<<endl;
    }
    return 0;
}
