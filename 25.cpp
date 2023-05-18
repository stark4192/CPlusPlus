//contructor
#include <iostream>
#include <string>
using namespace std;
class Time
{
    int h, min, sec;

public:
    Time()//constructor declared
    {
        h = 0;
        min = 0;
        sec = 0;
    }

    void display()
    {
        cout << "enter the time:";
        cout << "h=";
        cin >> h;
        cout << "min=";
        cin >> min;
        cout << "sec=";
        cin >> sec;
    }
    void add(Time obj1, Time obj2);
};

void Time::add(Time obj1, Time obj2)
{
    int red1 = 0;
    int red2 = 0;
    sec = obj1.sec + obj2.sec;
    if (sec > 60)
    {
        red1 = sec / 60;
        sec = sec % 60;
    }
    min = obj1.min + obj2.min;
    min = min + red1;
    if (min > 60)
    {
        red2 = min / 60;
        min = min % 60;
    }
    h = obj1.h + obj2.h;
    h = h + red2;
    cout << "the sum of time is=" << h << ":" << min << ":" << sec;
}

int main()
{
    Time A, B;//dummy constructor
    A.display();
    B.display();
    A.add(A, B);
    return 0;
}
