#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int roll;
    string name;
    int marks[3];
    int total(void); //function in private

public:
    void set_data(int r, string n, int m1, int m2, int m3); //function calling outide the class

    void display_data()
    {
        cout << "\nSTUDENT'S DETAILS";
        cout << "\n NAME : " << name;
        cout << "\n ROLL NO. : " << roll;
        cout << "\n MARKS : " << total(); //nested function
    }
};
inline void student ::set_data(int r, string n, int m1, int m2, int m3) //using inline functions
{
    roll = r;
    name = n; //copying name from int main
    marks[0] = m1,
    marks[1] = m2, marks[2] = m3;
}
int student ::total()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += marks[i];
    return sum;
}
int main()
{
    student s;
    int r, m1, m2, m3;
    string n;
    cout << "roll no. : ";
    cin >> r;
    cout << "\nname  : ";
    getchar();
    getline(cin, n);
    cout << "\nmarks in 3 subject : ";
    cin >> m1 >> m2 >> m3;
    s.set_data(r, n, m1, m2, m3);
    s.display_data();
    return 0;
}