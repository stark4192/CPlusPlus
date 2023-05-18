#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter value for x and y\n";
    cin >> x >> y;
    try
    {
        if (y != 0) //detecting exception
        {
            z = x / y;
            cout << z;
        }
        else
            throw y; //throwing exception, takes the control to catch block
    }
    catch (int y) //catching the exception
    {
        cout << "Division by zero exception occured\n"; //handling the exception
        cout << "value of y is entered as " << y;
    }
    return 0;
}