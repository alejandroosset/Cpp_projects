/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:09 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/17 18:03:49 by aosset-o         ###   ########.fr       */
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
    if(this->GetSignGrade() < 1 || this->GetExecGrade() < 1)
			throw GradeTooHighException();
    if(this->GetSignGrade() > 150 || this->GetExecGrade() > 150)
        throw GradeTooLowException();
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
std::string AForm::GetName() const
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
const char *AForm::GradeTooHighException::what() const throw()
{
    return("The Aform grade is too high.\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return("The Aform grade is too low.\n");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return("The form is not signed.\n");
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
    catch(std::exception & e)
    {
        std::cerr << e.what();
    }
    return(this->is_signed); 
}

void AForm::execute(const Bureaucrat &executor) const
{
    if (!this->is_signed)
        throw FormNotSignedException();
    if (executor.GetGrade() > this->exec_grade)
        throw GradeTooLowException();
    this->executeAction();
}

//operators
std::ostream &operator<<(std::ostream &os,  AForm &Aform)
{
	os << "Name: " << Aform.GetName() << " isSigned: " << Aform.GetSigned() << " SignGrade: " << Aform.GetSignGrade() << " ExecuteGrade: " << Aform.GetExecGrade() << std::endl;
	return (os);
}