#include<iostream>
#include<string.h>
using namespace std;
class string
{
    int length;
    char *str;
    int num_vowel;
    int num_upper;
    int num_word;
    int num_character;
    int *str;

public:
    string()
    {
        num_upper = 0;
        length = 0;
        num_vowel = 0;
        num_word = 1;
        num_character = 0;
    }
    string (char *s)
    {
        length = strlen(s);
        num_vowel = 0;
        num_word = 1;
        num_upper = 0;
        num_character = 0;
        str = new char[length + 1];
        strcpy(str, s);
    } 
    void show_str()
    {
        cout.write(str,length)<<endl;
        cout << strlen(str)<<endl;
    };
void string :: show_details()
{
    int i = 0;
    while(str[i] != '/0')
    {
        switch(str[i])
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                num_vowel++;
                break;
            }
    if(str[i]>='A'&&str[i]<='Z')
        num_upper++;
    if(str[i] == ' '&& str[i+1] != ' ')
        num_word++;
    }
int main()
{
 
return 0;
}