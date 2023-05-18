#include <iostream>
using namespace std;
class avg;
class XI
{
    string name;
    int roll;
    int *marks;
    float average;

public:
    void data(int n)
    {
        marks = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "NAME : ";
            getchar();
            getline(cin, name);
            cout << "ROLL NO. : ";
            cin >> roll;
            cout << "MARKS : ";
            cin >> marks[i];
        }
    }
    
    void cal(int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = marks[i] + sum;
        }
        average = sum / n;
    }
    friend class avg;
};
class avg
{
public:
    void display(XI o)
    {
        cout << "average of class is : " << o.average;
    }
};
int main()
{
    XI A;
    avg B;
    int n;
    cout << "no. of studnts : ";
    cin >> n;
    A.data(n);
    A.cal(n);
    B.display(A);
    return 0;
}