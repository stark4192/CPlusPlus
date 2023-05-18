#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string st = "monsoon";
    string st2;
    // ofstream out("52a.txt");
    // out << st;

    ifstream in("52b.txt");
    getline(in, st2);
    cout << st2;
    return 0;
}