#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip>


class contact
{
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
	public:
		int getIndex();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkSecret();
		void setIndex(int i);
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickName(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkSecret(std::string str);
};

class phonebook
{
	private:
		contact contacts[8];
		int index;
	int checkNumberInput(std::string str);
	public:
	phonebook();
	void phonebookAdd();
	void phonebookSearch();
	void phonebookDisplayList();
};
#endif
