#include <iostream>
#include <stdlib.h>
using namespace std;
class Complex
{
private:
    float real;
    float img;

public:
    Complex()
    {
        this->real = 0.0;
        this->img = 0.0;
    }
    void input()
    {
        cout << "Enter real part :";
        cin >> real;
        cout << "Enter imaginary part :";
        cin >> img;
        cout << endl;
    }
    Complex operator+(Complex &obj)
    {
        Complex temp;
        temp.img = this->img + obj.img;
        temp.real = this->real + obj.real;
        return temp;
    }
    Complex operator-(Complex &obj)
    {
        Complex temp;
        temp.img = this->img - obj.img;
        temp.real = this->real - obj.real;
        return temp;
    }
    Complex operator*(Complex &obj)
    {
        Complex temp;
        temp.img = this->img * obj.img;
        temp.real = this->real * obj.real;
        return temp;
    }
    void display()
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }
};
int main()
{
    Complex a, b, sum, diff, prod;
    cout << "Complex number 1->\n";
    a.input();
    cout << "Complex number 2->\n";
    b.input();
    cout << "Sum :";
    sum = a + b;
    sum.display();
    cout << "Difference :";
    diff = a - b;
    diff.display();
    cout << "Product :";
    prod = a * b;
    prod.display();
    return 0;
}