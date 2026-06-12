/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:20 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/12 11:29:18 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
        int GetGrade();

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
        void DecrementGrade();
        void IncrementGrade();
};

//operators
std::ostream &operator<<(std::ostream &os, Bureaucrat &other);
#endif