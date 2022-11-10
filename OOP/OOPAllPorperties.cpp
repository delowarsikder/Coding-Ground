#include <iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    ~Animal();
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
    void sleep()
    {
        cout << "Animal is sleeping" << endl;
    }
};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}

class Dog : public Animal
{
private: // access modifier for acheive the abstraction
    // properties --> variable
    char name[20];
    char breed[20];
    int age;

    // method -->operation

public:
    // default constructor
    Dog()
    {
        age = 0;
        // cout << "Constructor called" << endl;
    }

    void run()
    {
        cout << "Running" << endl;
    }
    void bark()
    {
        if (age > 20)
        {
            cout << "Hav-hav" << endl;
        }
        else
        {
            cout << "Woof-woof" << endl;
        }
    }

    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
};

class Cat : public Animal
{
public:
    void mow()
    {
        cout << "Cat Bark" << endl;
    }
};

int main()
{
    Dog barkie;                                 // barkie is object of Dog class
    barkie.setAge(20);                          // set the age of barki
    cout << "age: " << barkie.getAge() << endl; // this will print the bar

   Cat cat;
//    barkie.eat(); 
    return 0;
}