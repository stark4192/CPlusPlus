#include <iostream>
#include <string>
using namespace std;
template <class c, class i>
class poly
{
public:
    c x;
    i a;
    poly(c m, i n)
    {
        x = m;
        a = n;
    }
    void display(poly p)
    {
        cout << a << "*" << x << "+" << p.a << "*" << p.x;
    }
};
int main()
{
    poly<char, int> p1('X', 9), p2('Y', 8);
    p1.display(p2);
    return 0;
}