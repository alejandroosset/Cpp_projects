#include "phonebook.hpp"

phonebook::phonebook()
{
	index = 0;
}

int phonebook::checkNumberInput(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(!isdigit(str[i]))
            return(1);
    }
    return(0);
}
void phonebook::phonebookAdd()
{
    string str;
    str = "";
    if(this->index > 7)
        cout << "Overwriting oldest contact.\n";
    while (!cin.eof() && str == "")
	{
		cout << "Enter first name: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setFirstName(str);
	}
	str = "";
    while (!cin.eof() && str == "")
	{
		cout << "Enter last name: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setLastName(str);
	}
	str = "";
    while (!cin.eof() && str == "")
	{
		cout << "Enter nickname: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setNickName(str);
	}
	str = "";
    while (!cin.eof() && str == "")
	{
		cout << "Enter phone number: ";
		if (getline(std::cin, str))
		{
			if(checkNumberInput(str) == 1)
			{
            	cout<<"The number must contain only numbers";
				str = "";
			}
			else
				this->contacts[this->index % 8].setPhoneNumber(str);
		}
	}
	this->index++;
	cout << "Conatct added successfully\n";
}