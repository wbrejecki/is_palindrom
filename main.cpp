#include <iostream>

using namespace std;

bool is_palindrom(const string & text)
{
    for (int i=0; i<text.length(); i++)
    {
        if (text[i]!=text[(text.length()-1)-i])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    string tekst;
    getline(cin, tekst );
    cout<<is_palindrom(tekst);

    return 0;
}
