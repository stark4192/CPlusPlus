#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int mark(int i)
    {
        int marks;
        cout << "\nmarks for student " << i + 1 << " : ";
        cin >> marks;
        int total;
        total = total + marks;
        return total;
    }
    void display(int a)
    {
        cout << "\ntotal marks = " << a << endl;
    }
};
int main()
{
    student s[5];
    int a;
    for (int i = 0; i < 5; i++)
    {
        a = s[i].mark(i);
    }
    s[0].display(a);
    return 0;
}