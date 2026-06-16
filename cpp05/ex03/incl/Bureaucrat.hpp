/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:20 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 11:26:13 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        //Constructores y destructores
        Bureaucrat();
        Bureaucrat(std::string b_name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

        //Getters
        std::string GetName();
        int GetGrade() const;

        //Excepciones
        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
        class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
        
        //Funciones burocrata
        void signForm(AForm &f);
        void DecrementGrade();
        void IncrementGrade();
        void executeForm(const AForm &form);
};
//operators
std::ostream &operator<<(std::ostream &os, Bureaucrat &other);
#endif