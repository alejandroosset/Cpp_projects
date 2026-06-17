/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:08:50 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/17 15:37:46 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors and destructors
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("PresidentialForm", 25, 5)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other) 
    {
        this->target = other.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{

}

// Excepciones
const char *PresidentialPardonForm::PresidentialFailed::what() const throw()
{
    return("Presidential failed.\n");
}

//Funciones form
void PresidentialPardonForm::executeAction() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblerox" << std::endl;
}