#include <iostream>
#include <string.h>
using namespace std;

class persontoInvest
{
protected:
    string Name;
    double ID;
    string DOB;

public:
    persontoInvest(string N, double id, string dob)
    {
        Name = N;
        ID = id;
        DOB = dob;
    }
    void Pdisplay()
    {
        cout << "person Name : " << Name;
        cout << "\t person ID : " << ID;
        cout << "\t date of birth : " << DOB;
    }
};
class Investment
{
public:
    double iV;
    double cV;
    double profit;
    double percent;

public:
    Investment(double i, double c)
    {
        iV = i;
        cV = c;
        profit = cV - iV;
    }
    void Idisplay()
    {
        cout << "Initial Value : " << iV;
        cout << "\tCurrent Value : " << cV;
        cout << "\t Profit : " << profit << ","
             << "percent :" << profit / iV << endl;
    }
};

class house
{
public:
    string adress;

    int sqfeet;
    house(string a, int s)
    {
        adress = a;
        sqfeet = s;
    }
    void Hdisplay()
    {
        cout << "adress is : " << adress << endl;
        cout << "square feet : " << sqfeet << endl;
    }
};
class home : public Investment, public house
{
public:
    home(string a, int s, double i, double c) : Investment(i, c), house(a, s)
    {
        cout << "\n"
             << adress << sqfeet << endl;
    }
    void display()
    {
        Idisplay();
        Hdisplay();
    }
};
int main()
{
    persontoInvest P("abc", 123, "12 / 12 / 12");
    P.Pdisplay();
    Investment I(2000, 3000);
    house h("pqr", 120);
    home M("pqr", 120, 2000, 3000);
    M.display();
}
