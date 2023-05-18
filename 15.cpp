#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
    }

    Time(const Time &T)
    {
        hr = T.hr;
        min = T.min;
        sec = T.sec;
    }
    void input()
    {
        cout << "Enter the time:";
        cin >> hr >> min >> sec;
    }
    void display()
    {
        cout << hr << ":" << min << ":" << sec;
    }
};
int main()
{
    Time T1(2, 34, 32);
    Time T2;
    Time T3(T1);
    T2.input();
    cout << "The first time is: ";
    T1.display();
    cout << "\n";
    cout << "The second time is: ";
    T2.display();
    cout << "\n";
    cout << "The third time is: ";
    T3.display();
    cout << "\n";
    return 0;
}