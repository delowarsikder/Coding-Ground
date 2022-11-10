#include <iostream>
using namespace std;

class parent
{
public:
   virtual void print()
    {
        cout << "I am the parent Class" << endl;
    }
};

class child : public parent
{
public:
    void print()
    {
        cout << "I am at the child" << endl;
    }
};

int main()
{
    child childInstance;
    parent *parentPoint = &childInstance;
    parentPoint->print();
    // childInstance.print();

    return 0;
}