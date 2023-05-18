#include <iostream>

using namespace std;

class employee
{
public:
    employee()
    {
        ID++;
        name = "no name";
    }
    employee(string nam)
    {
        name = nam;
        ID++;
    }
    employee(float sala) { salary = sala; }
    employee(float sal, string nam)
    {
        salary = sal;
        name = nam;
    }
    void set_name(string nam) { name = nam; }
    void set_salary(float sal) { salary = sal; }
    string get_name() { return name; }
    float get_salary() { return salary; }

    ~employee() { ID = 0; }

private:
    static int ID;
    string name;
    float salary;
};
int employee::ID = 0;

int main(int argc, char *argv[])
{
    employee W1, W2("John"), W3(2000), W4(2500, "Ithan");
}