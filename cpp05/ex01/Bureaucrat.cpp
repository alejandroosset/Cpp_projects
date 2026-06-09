/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:28 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/09 19:55:20 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructores y destructores
Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string b_name, int grade) : name(b_name)
{
    if(grade < 1)
        throw this->GradeTooHighException();
    else if(grade > 150)
        throw this->GradeTooLowException();
    else
        this->grade = grade;
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

//Getters y setters
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
    
    if(this->grade == 150)
        throw this->GradeTooLowException();
    this->grade++;
}

void Bureaucrat::IncrementGrade()
{
    if(this->grade == 1)
        throw this->GradeTooHighException();
    this->grade--;    
}