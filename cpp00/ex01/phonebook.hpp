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
	public:
		int getIndex();
		string getFirstName();
		string getLastName();
		string getNickName();
		void setIndex(int i);
		void setFirstName(string str);
		void setLastName(string str);
		void setNickName(string str);
};

class phonebook
{
	private:
		contact contacts[8];
		int index;
};
#endif
