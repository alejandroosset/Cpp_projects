/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:09 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 11:44:45 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors and destructors
Form::Form() : name("default"), sign_grade(1), exec_grade(1)
{
    this->is_signed = false;
}

Form::Form(std::string f_name, int s_grade, int e_grade) : name(f_name), sign_grade(s_grade), exec_grade(e_grade)
{
    if(this->GetSignGrade() < 0 || this->GetExecGrade() < 0)
			throw GradeTooHighException();
    if(this->GetSignGrade() > 150 || this->GetExecGrade() > 150)
        throw GradeTooLowException();
    this->is_signed = false;
}

Form::Form(const Form& other) : name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
    this->is_signed = other.is_signed;
}

Form& Form::operator=(const Form& other) 
{
    if (this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

Form::~Form() 
{
}

//Getters
std::string Form::GetName()
{
    return(this->name);
}

bool Form::GetSigned()
{
    return(this->is_signed);
}

int Form::GetSignGrade()
{
    return(this->sign_grade);
}

int Form::GetExecGrade()
{
    return(this->exec_grade);
}

//Excepciones
const char *Form::GradeTooHighException::what() const throw()
{
    return("The form grade is too high.\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("The form grade is too low.\n");
}

//Funciones Form
bool Form::beSigned(Bureaucrat &b)
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

//operators
std::ostream &operator<<(std::ostream &os,  Form &form)
{
	os << "Name: " << form.GetName() << " isSigned: " << form.GetSigned() << " SignGrade: " << form.GetSignGrade() << " ExecuteGrade: " << form.GetExecGrade() << std::endl;
	return (os);
}