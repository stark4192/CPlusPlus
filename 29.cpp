#include <iostream>
#include <string.h>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int empid)
    {
        id = empid;
        salary = 34.0;
    }
    Employee() {}
};

// derived class
/*
    class {{derived- class name}} : {{visibilty mode}} {{base-class-name}}
    {
        class members/method/name
    }
    default visibility mode is private
    private visibility mode : public members of base class becomes private members of derived class
    public visibility mode : public members of base class becomes public members of derived class
*/

// creating a base class from derived class
class Programmer : Employee
{
public:
    Programmer(int empid)
    {
        id = empid;
    }
    int langcode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1);
    cout << harry.salary << endl;
    Programmer skill(1);
    cout << skill.langcode;
    skill.getdata();
    return 0;
}