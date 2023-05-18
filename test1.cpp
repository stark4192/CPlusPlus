#include <iostream>
#include <string.h>
using namespace std;
class employee
{

    string name;
    static int id;
    int salary;

public:
    employee()
    {
        id++;
        name = "no name";
    }
    employee(int sal, string n)
    {
        salary = sal;
        name = n;
        id++;
    }
    void getdata(string n, int sal)
    {
        name = n;
        salary = sal;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
    ~employee()
    {
        id = 0;
    }
};
int employee::id = 0;
int main()
{
    string name;
    float sal;
    employee emp;

    cout << "Enter Name : ";
    getline(cin, name);
    cout << "Enter Salary: ";
    cin >> sal;
    emp.getdata(name, salary);
    emp.display();
    return 0;
}