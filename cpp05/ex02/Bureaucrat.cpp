/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:28 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/10 19:23:33 by aosset-o         ###   ########.fr       */
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
            throw this->GradeTooHighException();
        else if(grade > 150)
            throw this->GradeTooLowException();
        this->grade = grade;
    }
    catch(std::string msg)
    {
        std::cerr << msg;
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

int Bureaucrat::GetGrade()
{
    return(this->grade);
}

//Excepciones
std::string Bureaucrat::GradeTooHighException()
{
    return("The bourocrat grade is too high.\n");
}

std::string Bureaucrat::GradeTooLowException()
{
    return("The bourocrat grade is too low.\n");
}

//Funciones del Burocrata
void Bureaucrat::DecrementGrade()
{
    try
    {
        if(this->grade == 150)
            throw this->GradeTooLowException();
        this->grade++;   
    }
    catch(std::string msg)
    {
        std::cerr << msg;
    } 
}

void Bureaucrat::IncrementGrade()
{
    try
    {
        if(this->grade == 1)
            throw this->GradeTooHighException();
        this->grade--;    
    }
    catch(std::string msg)
    {
        std::cerr << msg;
    }   
}

void Bureaucrat::signForm(AForm &f)
{
    if(f.beSigned(*this))
        std::cout << this->name << " signed " << f.GetName() << std::endl;
    else 
        std::cout << this->name << " couldn´t sign " << f.GetName() << " because their grade wasn´t high enough";
}

//operators
std::ostream &operator<<(std::ostream &os, Bureaucrat &other)
{
	os << other.GetName() << ", bureaucrat grade " << other.GetGrade() << std::endl;
	return (os);
}