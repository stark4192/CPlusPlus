//multiple inheritance
#include <iostream>
#include <string.h>
using namespace std;
class country
{
protected:
    int india;

public:
    void setrank();
    void getrank();
};
void country ::setrank()
{
    india = 1;
}
void country ::getrank()
{

    cout << "india's rank in overall activity is : " << india << endl;
}
class sports : public country
{
protected:
    int cricket;

public:
    void setplayers();
    void getplayers();
};
void sports::setplayers()
{
    cricket = 11;
}
void sports::getplayers()
{
    cout << "no. of players in cricket : " << cricket << endl;
}
class ipl : public sports
{
protected:
    string csk = "csk";

public:
    void display()
    {
        getrank();
        getplayers();
        cout << "Ipl is a domestic indian cricket league containing " << cricket << " no. of teams and " << csk << " is the best team\n";
    }
};
int main()
{
    ipl i;
    i.display();
}