#include <iostream>
using namespace std;
#define MAX_N 100
#define EMPTY_VAL -1

int memo[MAX_N];

void init()
{
    for (int i = 0; i < MAX_N; i++)
    {
        memo[i] = EMPTY_VAL;
    }
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}
// 0,1,1,2,3,5,8
int main()
{
    init();
    int n;
    // cin >> n;
   int val=fib(2);
   cout<<"val: "<<val<<endl;
//    for(int i=0;i<5;i++){
//        cout<<memo[i]<<endl;
//    } 

    return 0;
}