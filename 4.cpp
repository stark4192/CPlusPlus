#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void chk_bin();
};
void binary ::read()
{
    cout << "enter a binary no." << endl;
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "it is not an binary" << endl;
            exit(0);
        }
        else
        {
            cout << "it is binary no." << endl;
            exit(0);
        }
    }
}
int main()
{
    binary bin;
    bin.read();
    bin.chk_bin();
}