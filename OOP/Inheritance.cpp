#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Class A Constructor is called " << endl;
    }
    ~A()
    {
        cout << "Class A DesConstructor is called " << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Class B Constructor is called " << endl;
    }
    ~B()
    {
        cout << "Class B DesConstructor is called " << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "Class C Constructor is called " << endl;
    }
    ~C()
    {
        cout << "Class C DesConstructor is called " << endl;
    }
};

class D : public C
{
public:
    D()
    {
        cout << "Class D Constructor is called" << endl;
    }
    ~D()
    {
        cout << "Class D DesConstructor is called" << endl;
    }
};
class E : public D
{
public:
    E()
    {
        cout << "Class E Constructor is called" << endl;
    }
    ~E()
    {
        cout << "Class E DesConstructor is called" << endl;
    }
};

int main()
{
    cout << "only object is created" << endl;
    E e;
    A *a = &e;

    return 0;
}