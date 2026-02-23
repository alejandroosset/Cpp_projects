#include "phonebook.hpp"

phonebook::phonebook()
{
	index = 0;
}

int phonebook::checkNumberInput(std::string str)
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
    std::string str;
    str = "";
    if(this->index > 7)
        std::cout << "Overwriting oldest contact." << std::endl;
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setFirstName(str);
	}
	str = "";
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter last name: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setLastName(str);
	}
	str = "";
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter nickname: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setNickName(str);
	}
	str = "";
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter phone number: ";
		if (getline(std::cin, str))
		{
			if(checkNumberInput(str) == 1)
			{
            	std::cout<<"The number must contain only numbers";
				str = "";
			}
			else
				this->contacts[this->index % 8].setPhoneNumber(str);
		}
	}
	str = "";
    while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter darkest secret: ";
		if (getline(std::cin, str))
			this->contacts[this->index % 8].setDarkSecret(str);
	}
	this->index++;
	std::cout << "Conatct added successfully\n";
}
void phonebook::phonebookDisplayList()
{
	std::string str;
	std::cout << "|     Index|First Name| Last Name|  nickname|\n";
	for (int i = 0; i < this->index; i++)
	{
			std::cout << "|..........|..........|..........|..........|\n|";
			std::cout << std::setw(10);
			std::cout << phonebook::contacts[i].getIndex() << "|";
			if(phonebook::contacts[i].getFirstName().length() > 10)
			{
				std::cout << std::setw(9);
				std::cout << phonebook::contacts[i].getFirstName().substr(0,9) << ".|";
			}
			else
			{
				std::cout << std::setw(10);
				std::cout << phonebook::contacts[i].getFirstName() << "|";
			}
			if(phonebook::contacts[i].getLastName().length() > 10)
			{
				std::cout << std::setw(9);
				std::cout << phonebook::contacts[i].getLastName().substr(0,9) << ".|";
			}
			else
			{
				std::cout << std::setw(10);
				std::cout << phonebook::contacts[i].getLastName() << "|";
			}
			if(phonebook::contacts[i].getNickName().length() > 10)
			{
				std::cout << std::setw(9);
				std::cout << phonebook::contacts[i].getNickName().substr(0,9) << ".|" << std::endl;
			}
			else
			{
				std::cout << std::setw(10);
				std::cout << phonebook::contacts[i].getNickName() << "|" << std::endl;
			}
	}
}
void phonebook::phonebookSearch()
{
	if(this->index == 0)
	{
		std::cout << "There is no contact, add contacts to display them" << std::endl;
		return;
	}
	if(this->index > 8)
		this->index = 8;
	this->phonebookDisplayList();
	
}