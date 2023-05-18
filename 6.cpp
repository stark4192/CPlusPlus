#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
    float marks;
    static float total;
    static float avg;

public:
    void input()
    {
        cout << "enter data..........\n ";
        cout << "enter roll : ";
        cin >> roll;
        cout << "enter name : ";
        cin >> name;
        cout << "enter marks : ";
        cin >> marks;
        total = total + marks;
    }
    void findAvg(int n)
    {
        avg = total / n;
    }
    void display()
    {

        cout << "roll : " << roll << endl;
        cout << "name : " << name << endl;
        cout << "marks : " << marks << endl;
        cout << "average : " << avg << endl;
    }
};
float student ::total;
float student ::avg;
int main()
{
    int n;
    cout << "enter no. of student\n";
    cin >> n;

    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter data for student" << i + 1 << "\n";
        s[i].input();
    }
    s[0].findAvg(n);
    for (int i = 0; i < n; i++)
        s[i].display();
}
