#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    it = lst.begin();
    swap(*it, *it++);
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> list1; // empty list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    display(list1);
    return 0;
}