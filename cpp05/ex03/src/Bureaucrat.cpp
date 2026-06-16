/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:28 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 11:26:30 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

//Constructores y destructores
Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string b_name, int grade) : name(b_name)
{
    try
    {
        if(grade < 1)
            throw GradeTooHighException();
        else if(grade > 150)
            throw GradeTooLowException();
        this->grade = grade;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what();
    }        
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
    
	if (this != &other)
		this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
    
}

//Getters
std::string Bureaucrat::GetName()
{
    return(this->name);
}

int Bureaucrat::GetGrade() const
{
    return(this->grade);
}

//Excepciones
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("The bureaucrat grade is too high.\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("The bureaucrat grade is too low.\n");
}

//Funciones del Burocrata
void Bureaucrat::DecrementGrade()
{
    try
    {
        if(this->grade == 150)
            throw GradeTooLowException();
        this->grade++;   
    }
    catch(std::exception & e)
    {
        std::cerr << e.what();
    } 
}

void Bureaucrat::IncrementGrade()
{
    try
    {
        if(this->grade == 1)
            throw GradeTooHighException();
        this->grade--;    
    }
    catch(std::exception & e)
    {
        std::cerr << e.what();
    }   
}

void Bureaucrat::signForm(AForm &f)
{
    if(f.beSigned(*this))
        std::cout << this->name << " signed " << f.GetName() << std::endl;
    else 
        std::cout << this->name << " couldn´t sign " << f.GetName() << " because their grade wasn´t high enough" << std::endl;
}

void Bureaucrat::executeForm(const AForm &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.GetName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}

//operators
std::ostream &operator<<(std::ostream &os, Bureaucrat &other)
{
	os << other.GetName() << ", bureaucrat grade " << other.GetGrade() << std::endl;
	return (os);
}