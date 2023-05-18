#include <iostream>
#include <string>
using namespace std;
class student
{

public:
    int marks;
    static int max;

    void input(int i)
    {
        string name;
        cout << "\nname for student " << i + 1 << " : ";
        cin >> name;
        cout << "marks for student " << i + 1 << " : ";
        cin >> marks;
        cout << endl;
    }
    void find_max(student s[])
    {
        max = s[0].marks;
        for (int i = 0; i < 4; i++)
        {
            if (max <= s[i + 1].marks)
            {
                max = s[i + 1].marks;
            }
        }
    }

    void display()
    {
        cout << "\nmax marks = " << max << endl;
    }
};
int student ::max;

int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].input(i);
    }
    s[0].find_max(s);
    s[0].display();
    return 0;
}