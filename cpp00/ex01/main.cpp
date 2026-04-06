#include "phonebook.hpp"

int main()
{
    phonebook ph1;
    std::string str;
    while (str != "EXIT" && !std::cin.eof())
    {
        getline(std::cin, str);
        if(str.compare("ADD") == 0)
            ph1.phonebookAdd();
        if(str.compare("SEARCH") == 0)
            ph1.phonebookSearch();
    }
}