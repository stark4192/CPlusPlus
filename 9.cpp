#include <iostream>
#include <string>
using namespace std;
class swapp
{
public:
    int a, x, y;
    void input()
    {
        cout << "enter the values : ";
        cin >> a;
    }
    void swapping(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void display(int p, int q)
    {
        cout << "value of a after swapping : " << p << endl;
        cout << "value of a after swapping : " << q;
    }
};
int main()
{
    swapp s1, s2;
    s1.input();
    s2.input();
    cout << "before swap values of a is : " << s1.a << endl;
    cout << "before swap values of a is : " << s2.a << endl;
    s1.swapping(s1.a, s2.a);
    s1.display(s1.a, s2.a);

    return 0;
}