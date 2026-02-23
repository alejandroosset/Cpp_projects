#include "phonebook.hpp"

int main()
{
    phonebook ph1;
    string str;
    while (str != "EXIT")
    {
        cin >> str;
        cin.ignore(1000, '\n');
        if(str.compare("ADD") == 0)
            ph1.phonebookAdd();
        if(str.compare("SEARCH") == 0)
            cout << "DISPLAY CONTACTS\n";
    }
    return(0);
}