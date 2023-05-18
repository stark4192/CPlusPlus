//macros
#include <iostream>
using namespace std;
#define CUBE(x) x *x *x //->its macros(we define a cube)
int main()
{
    int s, q, r;
    q = CUBE(5 + 4);   //(5+4*5+4*5+4)
    s = CUBE((5 + 4)); //
    r = CUBE(5 * 4);
    cout << q << endl
        << s << endl
        << r;
}
