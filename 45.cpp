#include <iostream>
#include <string>
using namespace std;
class Base1
{
public:
    void show()
    {
        cout << " In Base1 ";
    }
};
class Derived1 : public Base1
{
public:
    int x;
    void show()
    {
        cout << "In Derived 1";
    }
    Derived1()
    {
        x = 10;
    }
};
int main(void)
{
    Base1 *bp, b;
    Derived1 d, *p;
    bp = &d;
    p = &d;
    bp->show();
    cout << p->x;

    return 0;
}