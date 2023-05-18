// operator  overloading using freind function
#include <iostream>
#include <string.h>
using namespace std;
class calculator
{
    int x, y;

public:
    int sum, dif, perc, mul;
    calculator()
    {
        x = 0;
        y = 0;
    }
    calculator(int n, int m)
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
    calculator operator--() // non-void function
    {
        x--;
        y--;
        return calculator(x, y);
    }
    calculator operator++(int)
    {
        x = x + 3;
        y = y + 3;
        return calculator(x, y);
    }
    void display()
    {
        printf("sum = %d\n", sum);
        printf("difference = %d\n", dif);
        printf("multiplication = %d\n", mul);
        printf("x = %d\n", x);
        printf("y = %d\n", y);
    }
    friend calculator &operator++(calculator &);
};
calculator &operator++(calculator &C)
{
    C.x++;
    C.y++;
    return C;
}
int main()
{
    calculator cal(40, 10), calc;
    +cal;
    -cal;
    *cal;
    --cal;

    cal.display();
    calc = ++cal;
    printf("\n\n");
    cal.display();
    calc = cal++;
    printf("\n\n");
    cal.display();
    return 0;
}
//++cal -> without int , cal++ -> int