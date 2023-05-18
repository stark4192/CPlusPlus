#include <iostream>
using namespace std;
class test
{
    int *l;
    static int c;

public:
    test()
    {
        c++;
        l = new int(0);
    }
    test(int n)
    {
        c++;
        l = new int(n);
    }
    ~test()
    {
        cout << "deleted" << endl;
        delete (l);
    }
    void display();
    static void counter();
};

void test::display()
{
    cout << "Number : " << *l << endl;
}
void test::counter()
{
    cout << "calls : " << c << endl;
}
int main()
{
    cout << "Calling functions  :" << endl;
    test a, b, c, d(1), e, f(2), g(3);
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    f.display();
    g.display();
    a.counter();
    return 0;
}