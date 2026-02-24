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
            	std::cout<<"The number must contain only numbers.";
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

void phonebook::displayCell(std::string str)
{
	if(str.length() > 10)
		std::cout << str.substr(0,9) << ".";
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	std::cout << "|";
}

void phonebook::phonebookDisplayList()
{
	std::string str;
	std::cout << "|     Index|First Name| Last Name|  nickname|" << std::endl;
	for (int i = 0; i < this->index; i++)
	{
			std::cout << "|..........|..........|..........|..........|\n|";
			std::cout << std::setw(10);
			std::cout << i + 1 << "|";
			displayCell(phonebook::contacts[i].getFirstName());
			displayCell(phonebook::contacts[i].getLastName());
			displayCell(phonebook::contacts[i].getNickName());
			std::cout << std::endl;
	}
}

void phonebook::phonebookSearch()
{
	std::string input;
	std::stringstream convert;
	int i = 0;
	if(this->index == 0)
	{
		std::cout << "There is no contacts, add contacts to display them" << std::endl;
		return;
	}
	if(this->index > 8)
		this->index = 8;
	this->phonebookDisplayList();
	while (i < 1 || i > this->index)
	{
		std::cout << "Enter the index of the contact you want to display: ";
		std::cin >> input;
		if(checkNumberInput(input) == 0)
		{
			convert << input;
			convert >> i;
			if(i < 1 || i > this->index)
			{
				std::cout << "The contact does not exist." << std::endl;
				std::cin.clear();
				input.clear();
				convert.clear();
				i = 0;
			}
		}
	}
	std::cout << this->contacts[i - 1].getFirstName() << std::endl;
	std::cout << this->contacts[i - 1].getLastName() << std::endl;
	std::cout << this->contacts[i - 1].getNickName() << std::endl;
	std::cout << this->contacts[i - 1].getPhoneNumber() << std::endl;
	std::cout << this->contacts[i - 1].getDarkSecret() << std::endl;		
}