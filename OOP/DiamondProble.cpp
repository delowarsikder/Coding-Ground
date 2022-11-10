/*
        A //person class
       /  \
       B   C  Father & Mother
       \   /
         D  //children
*/

#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    person()
    {
        cout << "person class Constructor" << endl;
    }
    ~person()
    {
        cout << "person class destructor" << endl;
    }
};

class father : virtual public person
{
public:
    father()
    {
        cout << "father class Constructor" << endl;
    }
    ~father()
    {
        cout << "Father class Destructor" << endl;
    }
};

class mother : virtual public person
{
public:
    mother()
    {
        cout << "Mother Class constructor" << endl;
    }
    ~mother()
    {
        cout << "Mother class destructor" << endl;
    }
};

class child : public father, public mother
{
public:
    child()
    {
        cout << "Child class constructor" << endl;
    }
    ~child()
    {
        cout << "\nChild class destructor" << endl;
    }
};

int main()
{
    child c;
    return 0;
}