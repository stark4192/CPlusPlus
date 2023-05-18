/*Extend the program ii. of inheritance to include a class sports, which
stores the marks in sports activity.Derive the result class from the
    classes ‘test’ and ‘sports’.Create objects using parameterized constructor.
    Calculate the marks and percentage of the student*/

#include <iostream>
#include <string>
using namespace std;
class test
{
protected:
    int marks_class[5];
    static int sum;

public:
    test()
    {
    }
    void get_marks()
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << "marks in " << i << " subject : ";
            cin >> marks_class[i];
        }
    }
    void get_sum()
    {
        for (int i = 1; i <= 5; i++)
        {
            sum = sum + marks_class[i];
        }
    }
    int add()
    {
        return sum;
    }
};
int test::sum;
class sports
{
protected:
    int marks_sports;

public:
    sports(int m)
    {
        marks_sports = m;
        cout << "marks in sports are : " << m << endl;
    }
};
class result : public test, public sports
{
public:
    result(int m) : test(), sports(m)
    {
    }
    void display()
    {
        cout << " total marks = " << marks_sports + add();
    }
};
int main()
{
    test t;
    t.get_marks();
    t.get_sum();
    sports s(95);
    result r(95);
    r.display();
    return 0;
}