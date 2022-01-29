#include<bits/stdc++.h>
using namespace std;
int totalRow=6;
int totalColumn=6;
char _map[7][7]=
{
    {'m','x','0','0','x','b'},
    {'0','x','0','x','x','0'},
    {'0','0','x','x','x','0'},
    {'m','x','0','0','x','b'}
};

int found=0;
void check(int i,int j)
{
    if(i<0 || j<0 || i>=totalRow || j>=totalColumn)
    {
        return;
    }
    if (_map[i][j]=='b')
    {
        found=1;
    }
    else if(_map[i][j]=='x')
    {
        return;
    }
    else
    {
        check(i,j+1);
        check(i+1,j);
        check(i,j-1);
        check(i-1,j);
    }
}



int main()
{
    int a=check(0,5);
    if (found==1)
    {
        cout<<"success "<<endl;

    }
    else
    {
        cout<<"failure"<<endl;
    }
    return 0;

}
