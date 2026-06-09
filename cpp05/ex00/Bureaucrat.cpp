/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:28 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/09 12:31:02 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : b_name("default"), grade(1)
{
    
}
Bureaucrat::Bureaucrat(std::string name, int grade) : b_name(name)
{
    if(grade < 1)
        this->GradeTooHighException();
    else if(grade > 150)
        this->GradeTooLowException();
    else
        this->grade = grade;
}

void Bureaucrat::GradeTooHighException()
{
    std::cout << "The bourocrat grade is too high." << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "The bourocrat grade is too low." << std::endl;
}

std::string Bureaucrat::GetName()
{
    return(this->b_name);
}

int Bureaucrat::GetGrade()
{
    return(this->grade);
}