#include <iostream>

using namespace std;

class circle
{
    int r;

public:
    int getdata()
    {
        r = 8;
        return r;
    }
};

class Rectangle : public circle
{
    int b;

public:
    int inputdata()
    {
        cout << "enter the value of b=";
        cin >> b;
        return b;
    }

    int area()
    {
        int area;

        area = inputdata() * getdata();
        cout << "area = " << area << endl;
        return area;
    }
};

class box : public Rectangle
{
    int h;

public:
    int takein()
    {
        h = 2;
        return h;
    }
    void volume()
    {
        int volume;
        volume = h * area();
        cout << "volume = " << volume;
    }
};
int main()
{
    box b;
    b.takein();
    b.volume();

    return 0;
}