/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:09 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/10 19:22:53 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors and destructors
AForm::AForm() : name("default"), sign_grade(1), exec_grade(1)
{
    this->is_signed = false;
}

AForm::AForm(std::string f_name, int s_grade, int e_grade) : name(f_name), sign_grade(s_grade), exec_grade(e_grade)
{
    this->is_signed = false;
}

AForm::AForm(const AForm& other) : name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
    this->is_signed = other.is_signed;
}

AForm& AForm::operator=(const AForm& other) 
{
    if (this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

AForm::~AForm() 
{
}

//Getters
std::string AForm::GetName()
{
    return(this->name);
}

bool AForm::GetSigned()
{
    return(this->is_signed);
}

int AForm::GetSignGrade()
{
    return(this->sign_grade);
}

int AForm::GetExecGrade()
{
    return(this->exec_grade);
}

//Excepciones
std::string AForm::GradeTooHighException()
{
    return("The Aform grade is too high.\n");
}

std::string AForm::GradeTooLowException()
{
    return("The Aform grade is too low.\n");
}

//Funciones AForm
bool AForm::beSigned(Bureaucrat &b)
{
    try
    {
        if(this->sign_grade < b.GetGrade())
            throw GradeTooHighException();
        this->is_signed = true;
    }
    catch(std::string msg)
    {
        std::cerr << msg;
    }
    return(this->is_signed); 
}

//operators
std::ostream &operator<<(std::ostream &os,  AForm &Aform)
{
	os << "Name: " << Aform.GetName() << " isSigned: " << Aform.GetSigned() << " SignGrade: " << Aform.GetSignGrade() << " ExecuteGrade: " << Aform.GetExecGrade() << std::endl;
	return (os);
}