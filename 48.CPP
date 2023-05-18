#include <iostream>
#include <string>
using namespace std;
class calculator
{
private:
    int x, y;

public:
    int sumX, sumY;
    void getdata()
    {
        printf("x->");
        scanf("%d", &x);
        printf("y->");
        scanf("%d", &y);
    }
    void add(calculator &C1, calculator &C2)
    {
        sumX = C1.x + C2.x;
        sumY = C1.y + C2.y;
    }
    void display()
    {
        printf("\n%d\n", sumX);
        printf("\n%d\n", sumY);
    }
};
int main()
{
    calculator C1;
    C1.getdata();
    calculator C2;
    C2.getdata();
    calculator C3;
    C3.add(C1, C2);
    C3.display();
    return 0;
}