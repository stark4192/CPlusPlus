#include <iostream>
#include <string>
using namespace std;
template <class T>
class sorting
{
    T *arr;

public:
    sorting(int x)
    {
        arr = new T[x];
    }
    void getdata(int a)
    {
        for (int i = 0; i < a; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> *(arr + i);
        }
    }
    void sort(int a)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (*(arr + i) > *(arr + j))
                {
                    T temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
    void display(int a)
    {
        for (int k = 0; k < a; k++)
            cout << *(arr + k) << "-";
        cout << endl;
    }
    ~sorting()
    {
        delete[] arr;
    }
};
int main()
{
    int m, n;
    printf("size of int array : ");
    scanf("%d", &n);
    printf("size of float array : ");
    scanf("%d", &m);
    sorting<int> s1(n);
    sorting<float> s2(m);
    cout << "int array" << endl;
    s1.getdata(n);
    cout << "float array" << endl;
    s2.getdata(m);
    s1.sort(n);
    s2.sort(m);
    s1.display(n);
    s2.display(m);
    return 0;
}