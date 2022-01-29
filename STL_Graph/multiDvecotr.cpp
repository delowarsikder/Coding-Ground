#include<iostream>
#include<vector>
using namespace std;

int main(int* argc,char** argv)
{
    //declaration
    vector<int>v1[100][2];//100*2 dimension
    vector<vector<int>>v2d;
    //assign value using array
    vector<int>temp;
    for (int i =0; i<10; i++)
    {
        temp.clear();
        for (int j=0; j<i; j++)
        {
            temp.push_back(j*10+1);
        }
        v2d.push_back(temp);
    }
    //access vector
    //using iterator
    vector<vector<int>>::iterator outer;
    vector<int>::iterator inner;
    for(outer=v2d.begin(); outer!=v2d.end(); outer++)
    {
        for(inner=outer->begin(); inner!=outer->end(); inner++)
        {
            cout<<*inner<<' ';
        }
        cout<<endl;
    }

    //using indexing
    for (int i=0; i<v2d.size(); i++)
    {
        for(int j=0; j<v2d[i].size(); j++)
        {
            cout<<v2d[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
