#include <iostream>
using namespace std;

class Human
{
private:
    int age;
    char name[20];

public:
    void operator++()
    {
        age = age + 1;
    }
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return this->age;
    }
};

int main()
{
    Human fidan;
    fidan.setAge(22);
    cout<<"Age: "<<fidan.getAge()<<endl;
    fidan++;
    cout<<"Increasing age: "<<fidan.getAge()<<endl;


    return 0;
}