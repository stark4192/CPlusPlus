// operator  overloading using member function
#include <iostream>
#include <string.h>
using namespace std;
class calculator
{
    int x, y;

public:
    int sum, dif, perc, mul;
    calculator(int n = 0, int m = 0)
    {
        x = n;
        y = m;
    }
    void operator+()
    {
        sum = x + y;
    }
    void operator-()
    {
        dif = x - y;
    }
    void operator*()
    {
        mul = x * y;
    }
    void operator--()
    {
        x--;
        y--;
    }
    void display()
    {
        printf("sum = %d\n", sum);
        printf("difference = %d\n", dif);
        printf("multiplication = %d\n", mul);
        printf("x-- = %d\n", x);
        printf("y-- = %d\n", y);
    }
};
int main()
{
    calculator cal(40, 10);
    cal.operator+();
    -cal;
    *cal;
    --cal;
    cal.display();
    return 0;
}