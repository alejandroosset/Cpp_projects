/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:35:20 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/09 19:55:46 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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

        //Getters y setters
        std::string GetName();
        int GetGrade();

        //Excepciones
        std::string GradeTooHighException();
        std::string GradeTooLowException();
        
        //Funciones burocrata
        void DecrementGrade();
        void IncrementGrade();
};
#endif