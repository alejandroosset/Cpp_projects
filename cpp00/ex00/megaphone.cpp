#include <string>
#include <iostream>
using namespace std;
int main (int ac, char *av[])
{
	if(ac < 2)
		cout << "* LOUD AND UNBEARABLE NOISE *" << "\n";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0' ; j++)
				cout << (char)toupper(av[i][j]);
		}
		cout << endl;		
	}
	return(0);
}