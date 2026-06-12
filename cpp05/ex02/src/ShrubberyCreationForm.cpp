/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:31:02 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 15:16:21 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
    *this = other;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) 
{
    if (this != &other) 
        this->target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{

}

//Excepción
const char *ShrubberyCreationForm::CanNotOpenFile::what() const throw()
{
    return("Cannot open file.\n");
}
//Ejecución
void ShrubberyCreationForm::executeAction() const
{
	std::ofstream file((this->target + std::string("_shrubbery")).c_str());
    try
    {
        if(!file)
            throw CanNotOpenFile();
        file << "\t\t\t\t\t\t\t\t\t\t\t\t.\n";
        file << "\t\t\t\t\t\t\t\t\t\t\t  .         ;  \n";
        file << "\t\t\t\t\t .              .              ;%     ;;   \n";
        file << "\t\t\t\t\t   ,           ,                :;%  %;   \n";
        file << "\t\t\t\t\t    :         ;                   :;%;'     .,   \n";
        file << "\t\t\t ,.        %;     %;            ;        %;'    ,;\n";
        file << "\t\t\t ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
        file << "\t\t\t  %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
        file << "\t\t\t   ;%;      %;        ;%;        % ;%;  ,%;'\n";
        file << "\t\t\t    `%;.     ;%;     %;'         `;%%;.%;'\n";
        file << "\t\t\t     `:;%.    ;%%. %@;        %; ;@%;%'\n";
        file << "\t\t\t        `:%;.  :;bd%;          %;@%;'\n";
        file << "\t\t\t          `@%:.  :;%.         ;@@%;'   \n";
        file << "\t\t\t            `@%.  `;@%.      ;@@%;         \n";
        file << "\t\t\t              `@%%. `@%%    ;@@%;        \n";
        file << "\t\t\t              ;@%. :@%%  %@@%;       \n";
        file << "\t\t\t                %@bd%%%bd%%:;     \n";
        file << "\t\t\t                #@%%%%%:;;\n";
        file << "\t\t\t                %@@%%%::;\n";
        file << "\t\t\t                %@@@%(o);  . '         \n";
        file << "\t\t\t                %@@@o%;:(.,'         \n";
        file << "\t\t\t            `.. %@@@o%::;         \n";
        file << "\t\t\t               `)@@@o%::;         \n";
        file << "\t\t\t                %@@(o)::;        \n";
        file << "\t\t\t               .%@@@@%::;         \n";
        file << "\t\t\t               ;%@@@@%::;.          \n";
        file << "\t\t\t              ;%@@@@%%:;;;. \n";
        file << "\t\t\t          ...;%@@@@@%%:;;;;,..    Gilo97\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
    
}
