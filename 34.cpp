#include <iostream>
#include <string.h>
using namespace std;

class PersontoInvest
{
public:
    string name = "xyz";
    int id = 123;
    string dob = "13 / 7 / 1998";

    void Pdisplay()
    {

        cout << "name : " << name << endl;
        cout << "id : " << id << endl;
        cout << "dob : " << dob << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    }
};
class Investment
{
public:
    float profit, profitperc, initial, current;
    Investment(float i, float c)
    {
        initial = i;
        current = c;
        profit = current - initial;
        profitperc = profit / initial;
    }
    void Idisplay()
    {
        cout << "intial value : " << initial << endl;
        cout << "current value : " << current << endl;
        cout << "profit = " << profit << endl;
        cout << "profitperc = " << profitperc * 100 << "%" << endl;
        cout << " ----------------------------------------- " << endl;
    }
};
class house
{
public:
    string adress;
    int sqfeet;
    house()
    {
        adress = "abc";
        sqfeet = 800;
    }
    void Hdisplay()
    {
        cout << "adress is : " << adress << endl;
        cout << "square feet : " << sqfeet << endl;
        cout << "******************************************" << endl;
    }
};

class HouseThatIsAnInvestment : public Investment, house
{
public:
    Idisplay();
    Hdisplay();
};
int main()
{
    PersontoInvest P;
    P.Pdisplay();
    Investment(3000, 4000);
    HouseThatIsAnInvestment h;
    house *q;
    cout << q->adress;
    return 0;
}