//add-> call by value
//substract -> call by reference
//multiply -> call by address
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class fraction
{
    int num;
    int deno;
    int total;

public:
    void input()
    {
        cout << " enter no. : ";
        cin >> num;
    }
    void add(fraction f1, fraction f2);
    void subtract(fraction &f1, fraction &f2);
    void multiply(fraction *f1, fraction *f2);
};

void fraction ::add(fraction f1, fraction f2)
{
    int total = f1.num + f2.num;
    cout << total << endl;
}
void fraction ::subtract(fraction &f1, fraction &f2)
{
    int result = f1.num - f2.num;
    cout << result << endl;
}
void fraction ::multiply(fraction *f1, fraction *f2)
{
    int result = f1->num * f2->num;
    cout << result << endl;
}
int main()
{
    fraction f, f1, f2;
    f1.input();
    f2.input();
    cout << "addition of two fraction : ";
    f.add(f1, f2);
    cout << "difference is : ";
    f.subtract(f1, f2);
    cout << " multiplication is : ";
    f.multiply(&f1, &f2);
    return 0;
}