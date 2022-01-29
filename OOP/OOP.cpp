#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee // class for abstraction
{
    virtual void AskForPromotion() = 0; // pure virtual class
    // virtual void Display(){} // this is called only virtual fuction
};

class Employee : AbstractEmployee
{
private: // though private by default
    string Company;
    int Age;

protected:
    string Name;

public:
    Employee()
    {
        // default constructor
    }
    Employee(string name, string company, int age)
    {
        // parameterize constructor
        Name = name;
        Company = company;
        Age = age;
    }
    ~Employee()
    {
        // destructor
        //  cout<<"Objects are not alive"<<endl;
    }
    // start Encapsulation
    void setName(string name) // setter
    {
        Name = name;
    }
    string getName() // getter
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    // end Encapsulation
    void AskForPromotion() // Abstraction
    {
        if (Age > 30)
        {
            cout << Name << " got promoted!" << endl;
        }
        else
        {
            cout << Name << ", sorry, No Promotion for you!" << endl;
        }
    }
   virtual void work()
    {
        cout << "Employee work virtual" << endl;
        cout << "Employee " << Name << " is working here" << endl;
    }
};
class Developer : public Employee
{
    // inheritance employee class
public:
    string FavProgrammingLang;
    Developer()
    {
    }
    Developer(string name, string company, int age, string favProgrammningLang)
        : Employee(name, company, age)
    {
        FavProgrammingLang = favProgrammningLang;
    }
    void Display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Company: " << getCompany() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "FavProgLang: " << FavProgrammingLang << endl;
    }
    void work()
    {
        cout << "Developer class " << endl;
        cout << Name << " is writing a " << FavProgrammingLang << " code!" << endl;
    }
};
class Teacher : public Employee
{
    string Subject;

public:
    Teacher() {}
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << "is Preparing " << Subject << " Lession " << endl;
    }
    void work()
    {
        cout << "Techer class" << endl;
        cout << Name << " is teaching in " << Subject << endl;
    }
};
int main()
{
    // Employee employee1("Delowar", "Govt", 24);
    Employee robi = Employee("Robiul", "Nice", 42);
    Developer d("Delowar", "KUET", 23, "C++");
    // d.Display();
    Teacher t("ithu", "Stay School", 36, "programming");
    // d.work();
    // t.work();

    // polymorphism
    //  base can point to the drived class using pointer
    Employee *e1 = &d;
    Employee *e2 = &t;
    robi.work();
    e1->work();
    e2->work();

    return 0;
}
