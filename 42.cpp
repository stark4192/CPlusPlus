#include<iostream>
#include<string.h>
using namespace std;

class b5
{
    protected:
    string name;
    int roll;
    public:
    void getdata()
    {
        cout << "name : ";
        getchar(cin, name);
        cout << "roll no. : ";
        cin >> roll;
    }
};
class nobles : public b5
{
    protected:
        int n;

}
int main()
{

return 0;
}