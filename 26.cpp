//nested class
#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    int x;
    void get_data()
    {
        cout << "\nenter the value of x : ";
        cin >> x;
    }
    class B
    {
        int y;

    public:
        void get_data()
        {
            cout << "\nvalue of y : ";
            cin >> y;
        }
        void sum()
        {
            A a;//CLASS A IS CONTAING CLASS B EHICH HAS OBJECT a 
            a.get_data();
            cout << a.x << " " << y << endl;
            cout << "sum of x + y = " << a.x + y;
        }
    };
};
int main()
{
    A::B b; //SYNTAX FOR NESTED CLASS IN MAIN
    b.get_data();
    b.sum();
    return 0;
}