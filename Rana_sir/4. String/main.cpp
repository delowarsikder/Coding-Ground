#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello ";

    string s2 ="World";

    string s3 = s1 + s2;

    cout<<s3<<endl;

    string line;
    //cin>>line;//Stops reading after first word(i.e a word separator is found)
    //cout<<line;

    cout<<"Enter a Line:";
    getline(cin,line);//Takes a whole line as input until a newline is found
    cout<<line;

    return 0;
}
