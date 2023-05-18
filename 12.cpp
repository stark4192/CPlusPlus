#include <iostream>
#include <string>
using namespace std;
class student
{
    static int marks[5];
    static int max;

public:
    void input(int i)
    {
        string name;
        cout << "\nname for student " << i + 1 << " : ";
        cin >> name;
        cout << "marks for student " << i + 1 << " : ";
        cin >> marks[i];
        cout << endl;
    }
    void find_max(int i)
    {
        max = marks[0];
        if (max < marks[i + 1])
        {
            max = marks[i + 1];
        }
        else
            max = max;
    }

    void display()
    {
        cout << "\nmax marks = " << max << endl;
    }
};
int student::max;
int student::marks[5];
int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].input(i);
    }
    for (int i = 0; i < 4; i++)
        s[0].find_max(i);
    s[0].display();
    return 0;
}