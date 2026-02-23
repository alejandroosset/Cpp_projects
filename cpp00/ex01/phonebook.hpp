#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>

using namespace std;
class contact
{
	private:
		int index;
		string firstName;
		string lastName;
		string nickName;
		string phoneNumber;
	public:
		int getIndex();
		string getFirstName();
		string getLastName();
		string getNickName();
		string getPhoneNumber();
		void setIndex(int i);
		void setFirstName(string str);
		void setLastName(string str);
		void setNickName(string str);
		void setPhoneNumber(string str);
};

class phonebook
{
	private:
		contact contacts[8];
		int index;
	int checkNumberInput(string str);
	public:
	phonebook();
	void phonebookAdd();
	void phonebookSearch();
};
#endif
