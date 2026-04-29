/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:46:11 by aosset-o          #+#    #+#             */
/*   Updated: 2026/04/29 17:32:42 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(char *av[], std::string str)
{
    std::ofstream outfile;
    int pos;

    outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
    for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}
int main(int ac, char*av[])
{
    std::ifstream infile;
    std::string str;
    char c;
    
    if(ac != 4)
    {
        std::cout << "usage: ./replace <filename> string1 string2" << std::endl;
        return(1);
    }
    infile.open(av[1]);
    if(infile.fail())
    {
        std::cout << "Error: " << av[1] << ": could not be open." << std::endl;
        return(1);
    }
    while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;
    infile.close();
    return(replace(av, str));
}