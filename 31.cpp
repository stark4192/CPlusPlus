#include <iostream>
using namespace std;
class area
{
protected:
    int l, b, w, h;
    float r;

public:
    int a1, a3;
    float a2;
    void getdata()
    {
        cout << "height and base of triangle : ";
        cin >> h >> b;
        cout << "radius of circle : ";
        cin >> r;
        cout << "length and width of rectangle : ";
        cin >> l >> w;
    }
    void show()
    {
        cout << l << b << h << w << r;
    }
    int tri()
    {
        return b * h;
    }
    int cir()
    {
        a2 = 3.14 * r * r;
        return a2;
    }
    int rec()
    {
        a3 = l * w;
        return a3;
    }
};
class triangle : public area
{
    int x;

public:
    void display()
    {

        x = tri();
        cout << "\narea of triangle : " << x << endl;
    }
};
class circle : public area
{
public:
    void display()
    {
        cout << "area of circle : ";
        cir();
    }
};
class rectangle : public area
{
public:
    void display()
    {
        cout << "area of rectangle : ";
        rec();
    }
};
int main()
{
    area d;

    d.getdata();
    d.show();
    triangle t;
    t.display();
    circle c;
    c.display();
    rectangle r;
    r.display();
    return 0;
}