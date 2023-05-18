#include <iostream>
#include <string>
using namespace std;
class small
{
    int a, b, c;

public:
    void search_small();
};
void small ::search_small()
{
    cout << "a : ";
    cin >> a;
    cout << " b : ";
    cin >> b;
    cout << " c : ";
    cin >> c;
    cout << "smallest is : ";
    a < b ? (a < c ? (cout << a) : (cout << c)) : (b < c ? (cout << b) : (cout << c));
}
int main()
{
    small s;
    s.search_small();
    return 0;
}