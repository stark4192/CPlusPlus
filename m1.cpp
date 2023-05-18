#include <iostream>
using namespace std;
class books
{
private:
    int price;
    char book[30];
    char author[30];

public:
    void getdata()
    {
        cout << "Enter book name: ";
        cin >> book;
    }
    friend void range(int, int, books);
};
void range(int u, int l, books b)
{
    if (u >= b.price && l <= b.price)
    {
        cout << "Books name is: " << b.book << endl;
        cout << "Author name is: " << b.author << endl;
        
    }
}
int main()
{
    int n, ul, ll;
    cout << "Enter the number of books: ";
    cin >> n;
    books B[n];
    for (int i = 0; i < n; i++)
    {
        B[i].getdata();
    }
    cout << "Enter upper price limit:";
    cin >> ul;
    cout << "Enter lower price limit:";
    cin >> ll;
    for (int i = 0; i < n; i++)
    {
        range(ul, ll, B[i]);
    }
    return 0;
}