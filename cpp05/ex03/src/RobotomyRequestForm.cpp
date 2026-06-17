/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:04:19 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/17 16:00:22 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Consttructors and destructors
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyForm",  72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("RobotomyForm",  72, 45)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
    if (this != &other) 
    {
        this->target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{

}

// Excepciones
const char *RobotomyRequestForm::RobotomyFailed::what() const throw()
{
    return("Robotomy failed.\n");
}

//Funciones form
void RobotomyRequestForm::executeAction() const
{
    int random;

    random = rand() % 2;

    try
    {
        if(random ==  0)
            throw RobotomyFailed();
        std::cout << "Beep beeeep beep "  << this->target << " has been robotomized" << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
}
