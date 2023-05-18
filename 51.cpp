using namespace std;
#include <iostream>
#include <string.h>

class date
{
private:
    int dd, mm, yy;

public:
    friend istream &operator>>(istream &input /*taking input*/, date &D /*class object*/) // non void function
    {
        cin >> D.dd >> D.mm >> D.yy;
        return input;
    }
    friend ostream &operator<<(ostream &output, date &D)
    {
        cout << D.dd << "/" << D.mm << "/" << D.yy;
        return output;
    }
};
main()
{
    date D;
    cout << "Enter date : ";
    cin >> D; // overloaded >> is invoked//
    cout << "\n DATE : ";
    cout << D; // overloaded << is invoked
}