/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:04:52 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 11:46:55 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib> 
# include <ctime>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        virtual void executeAction() const;
    public:
        //Constructors and destructors
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();

        //Excepciones
        class RobotomyFailed : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
