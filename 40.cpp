#include <iostream>
using namespace std;

class Nudes
{
    int passcode;

public:
    void display()
    {
        cout << "Enter the password:" << endl;
        cin >> passcode;
        if (passcode == 101)
        {
            cout << "Nudes sent to whatsapp!";
        }
    }
};

int main()
{
    Nudes sunny;
    sunny.display();
    return 0;
}