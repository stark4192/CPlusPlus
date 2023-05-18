#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
float funcavg(T1 a, T2 b)
{
    return (a + b) / 2.0;
}
int main()
{
    float f = funcavg(8, 'a');
    cout << "average : " << f;
    return 0;
}