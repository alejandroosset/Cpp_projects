/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:15 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 12:07:22 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;
    protected:
        virtual void executeAction() const = 0;
    public:
        // Constructores y destructores
        AForm();
        AForm(std::string f_name, int s_grade, int e_grade);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

        //Getters
        std::string GetName() const;
        bool GetSigned();
        int GetSignGrade();
        int GetExecGrade();
        
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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        //Funciones Aform
        bool beSigned(Bureaucrat &b);
        void execute(const Bureaucrat &executor) const;
        // void execute(Bureaucrat &executor) const;
};
//operators
std::ostream &operator<<(std::ostream &os,  AForm &Aform);
#endif
