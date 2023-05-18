#include <iostream>
using namespace std;
class Try
{
    static int num1;

public:
    static int num2;
    // Local parameter hides class member
    // Class member can be accessed it using ::
    void function(int num1)
    {
        // num1 static variable can be accessed using ::
        // inspite of local variable num1
        cout << "Static num1: " << Try::num1 << endl;
        cout << "Local num1: " << num1 << endl;
    }
};
// Defining a static members explicitly using ::
int Try::num1 = 10;
int Try ::num2 = 30;
int main()
{
    Try o;
    int num1 = 20;

    o.function(num1);
    cout << "static num2 = " << o.num2;
    return 0;
}