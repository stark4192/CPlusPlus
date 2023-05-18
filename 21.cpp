#include <iostream>
#include <string.h>
using namespace std;
class market
{
    int code[100];
    int price[100];

public:
    void get_code(int i)
    {
        cout << " code for item no. : ";
        cin >> code[i];
    }
    void get_price(int i)
    {
        cout << "price for item no. : ";
        cin >> price[i];
    }
    void cal(int n);
    void display(int n);
};
int total;
void market ::cal(int n)
{

    for (int i = 0; i < n; i++)
    {
        total += price[i];
    }
}
void market ::display(int n)
{
    cout << "-----------------------------------------\n";
    cout << "                  BILL                   \n";
    cout << "QUANTITY : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n ITEM NO.  " << i + 1;
        cout << "\n CODE OF  ITEM  : " << code[i];
        cout << "\n PRICE OF ITEM : " << price[i] << endl;
        cout << "\n TOTAL : " << total << endl;
    }
}
int main()
{
    market m;
    int n;
    cout << "no. of items : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " item no. : " << i + 1 << endl;
        m.get_code(i);
        m.get_price(i);
    }
    m.cal(n);
    m.display(n);
    return 0;
}