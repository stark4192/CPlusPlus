#include <iostream>
#include <string>
using namespace std;
class one
{
private:
    int num;

public:
    void set(int i)
    {
        num = i;
    }
    int get()
    {
        return num;
    }
};
class two
{
public:
    one o;
    void show()
    {
        cout << "\n number =  " << o.get();
    }
};
int main()
{
    two t;// class two,
    t.o.set(100);// 
    t.show();
    return 0;
}