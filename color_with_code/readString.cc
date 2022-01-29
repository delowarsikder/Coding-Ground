#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("All _ color.txt");
//    ofstream fout("colorNameWith code.txt",fstream::app);
    ofstream fout("colorNameWith code.txt");
    string line;
    getline(fin,line);
    while(getline(fin,line))
    {
        stringstream ss(line);
        string colorCode,colorName1,colorName2,colorName3;
        ss>>colorCode>>colorName1>>colorName2>>colorName3;
        fout<<"<color name=\""<<colorName1<<colorName2<<colorName3<<"\">"<<colorCode<<"</color>"<<endl;
        //cout<<colorCode<<" \"->\" "<<colorName<<endl;
        cout<<"<color name=\""<<colorName1<<colorName2<<colorName3<<"\">"<<colorCode<<"</color>"<<endl;
    }
    return 0;
}
