/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:15 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/10 17:19:27 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;
    public:
        // Constructor and destructors
        Form();
        Form(std::string f_name, int s_grade, int e_grade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        //Getters
        std::string GetName();
        bool GetSigned();
        int GetSignGrade();
        int GetExecGrade();
        
        //Excepciones
        std::string GradeTooHighException();
        std::string GradeTooLowException();
        
        //Funciones form
        bool beSigned(Bureaucrat &b);
};
//operators
std::ostream &operator<<(std::ostream &os,  Form &form);
#endif
