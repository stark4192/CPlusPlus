#include <iostream>
#include <string.h>
using namespace std;
class sample
{
private:
    static int num_object;
    static int num_object_destroyed;

public:
    sample()
    {
        num_object++;
        cout << "no. of object created = " << num_object << endl;
    }
    ~sample()
    {
        num_object_destroyed++;
    }
    void show()
    {

        cout << "no. of object destroyed = " << num_object_destroyed << endl;
    }
};
int sample ::num_object = 0;
int sample ::num_object_destroyed = 0;
void my_func()
{
    sample s8, s9;
    s9.show();
}
int main()
{
    sample s1, s2, s3;
    {
        s1.show();
        sample s4;
        {
            sample s5;
            s5.show();
        }
    }
    s3.show();
    my_func();
    s2.show();
    return 0;
}