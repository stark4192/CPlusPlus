#include <iostream>
#include <string.h>
using namespace std;
class B;
class A
{
protected:
    string name;
    int id;
    string dob;

public:
    int current;
    int initial;
    A(int, int);
    void getdata(void)
    {
        cout << "name : ";
        getline(cin, name);
        cout << "id : ";
        cin >> id;
        cout << "dob : ";
        cin >> dob;
    }
};
A::A(int x, int y)
{
    initial = x;
    current = y;
}

class B
{
protected:
    float profit;

public:
    void cal(int);
};
void B::cal(int a)
{
    profit = a.current - a.initial;
}
int main()
{
    A a(1000, 3000);
    B b();
    Z = cal(a);
    a.getdata();
    return 0;
}