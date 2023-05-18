#include <iostream>
#include <stdlib.h>
using namespace std;

class poly
{
    int a[10];
    int size;

public:
    friend ostream &operator<<(ostream &dout, const poly &ob)
    {
        for (int i = 0; i < ob.size; i++)
        {
            dout << ob.a[i];
            if (i != 0)
                dout << "x^" << i;
            if (i != ob.size - 1)
                dout << " + ";
        }

        return dout;
    }

    friend istream &operator>>(istream &din, poly &ob)
    {
        cout << "Enter size :";
        din >> ob.size;
        cout << "Enter co-eff \n";
        for (int i = 0; i < ob.size; i++)
        {
            din >> ob.a[i];
        }

        return din;
    }

    poly operator+(poly c)
    {
        poly res;
        res.size = max(size, c.size);
        for (int i = 0; i < size; i++)
            res.a[i] = a[i];

        for (int i = 0; i < size; i++)
            res.a[i] += c.a[i];

        return res;
    }

    poly operator-(poly c)
    {
        poly res;
        res.size = max(size, c.size);
        for (int i = 0; i < size; i++)
            res.a[i] = a[i];

        for (int i = 0; i < size; i++)
            res.a[i] -= c.a[i];

        return res;
    }
};

int main()
{
    poly p1, p2, res1, res2;
    cout << "Polynomial 1\n";
    cin >> p1;
    cout << "Polynomial 2\n";
    cin >> p2;
    res1 = p1 + p2;
    res2 = p1 - p2;
    cout << "Polynomial 1 :";
    cout << p1;
    cout << endl;
    cout << "Polynomial 2 :";
    cout << p2;
    cout << endl;
    cout << "Sum :";
    cout << res1;
    cout << endl;
    cout << "Diffrence :";
    cout << res2;
    cout << endl;

    return 0;
}