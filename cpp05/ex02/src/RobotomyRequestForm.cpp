/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:04:19 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 15:26:47 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Consttructors and destructors
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyForm",  72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) 
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
    if (this != &other) 
    {
        this->target = target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{

}

const char *RobotomyRequestForm::RobotomyFailed::what() const throw()
{
    return("RoboromyFaled.\n");
}

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
