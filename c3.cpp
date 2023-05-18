#include <iostream>
#include <string>
using namespace std;
class complex
{
    int real, img;

public:
    complex();                 //default constructor declared
    complex(int a, int b);     //parameterized constructor declared
    complex(const complex &c); //copy constructor declared
};
complex ::complex() //constructor defined
{
    cout << "enter real no. : ";
    cin >> real;
    cout << "enter imaginary no. : ";
    cin >> img;
    cout << "default constructor" << endl;
    cout << real << "+" << img << "i" << endl;
}
complex ::complex(int real, int img)
{
    real = real;
    img = img;
    cout << "parameterized constructor" << endl;
    cout << real << "+" << img << "i" << endl;
}
complex ::complex(const complex &c)
{
    real = c.real;
    img = c.img;
    cout
        << "copy constructor" << endl;
    cout << c.real << "+" << c.img << "i" << endl;
}
int main()
{
    complex c1;       //default constructor is called
    complex c2(6, 8); //parameterized constructor is called
    complex c3(c2);   //copy constructor is called
}