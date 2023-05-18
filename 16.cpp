#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;
    int obj;
public:
    complex()
    {
        real = 0;
        imag = 0;
        obj = 1;
    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
        obj = 2;
    }
    complex(const complex &c)
    {
        real = c.real;
        imag = c.imag;
        obj = 3;
    }
    ~complex()
    {
        cout << "The destructor is being invoked for the object" << obj << " with value: " << real << "+" << imag << 'i' << "\n";
    }
    
    void display()
    {
        cout << real << "+" << imag << 'i' << "\n";
    }
};
int main()
{
    complex c1;
    complex c2(3, 4);
    complex c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}