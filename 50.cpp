#include <iostream>
#include <string.h>
using namespace std;
class array
{
    int arr[10];
    int size;

public:
    array()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = 0;
        }
    }
    array(int n)
    {
        size = n;
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " data -> ";
            cin >> arr[i];
        }
        cout << "\n\n";
    }
    array operator+(array &a) // only 1 argument or 0 argument //it is non-void function, it should have return type
    {
        array temp;
        temp.size = size;
        for (int i = 0; i < temp.size; i++)
        {
            temp.arr[i] = arr[i] + a.arr[i];
            cout << a.arr[1] << endl;
        }
        return temp;
    }
    void display(int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << "->";
    }
};
int main()
{
    int n;
    cout << "size-> ";
    cin >> n;
    array a1(n), a2(n), a3;
    a3 = a1 + a2; // a3 = temp
    a3.display(n);
    return 0;
}