#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    int p, q;

public:
    A(int a = 0, int b = 0)
    {
        p = a;
        q = b;
    }
    void operator+() // void add()
    {
        cout << p + q << endl;
    }
};
int main()
{
    A x(6, 7), y;
    +x; // y.add();
    return 0;
}
/*
unary -> +-*
binary -> !,=,>>,<<,%,++,--
*/