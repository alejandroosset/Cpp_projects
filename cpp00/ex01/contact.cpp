#include "phonebook.hpp"

contact::contact(void)
{
}
int contact::getIndex()
{
	return(index);
}
string contact::getFirstName()
{
	return(firstName);
}
string contact::getLastName()
{
	return(lastName);
}
string contact::getNickName()
{
	return(nickName);
}
void contact::setIndex(int i)
{
	index = i;
}
void contact::setFirstName(string str)
{
	if(str.length()> 10)
		firstName = str.substr(0,9) + ".";
	else 
		firstName = str;
}
void contact::setLastName(string str)
{
	if(str.length()> 10)
		lastName = str.substr(0,9) + ".";
	else 
		lastName = str;
}
void contact::setNickName(string str)
{
	if(str.length()> 10)
		nickName = str.substr(0,9) + ".";
	else 
		nickName = str;
}