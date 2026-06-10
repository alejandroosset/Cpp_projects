/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:15 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/10 19:33:51 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAFORM_HPP
# define AAFORM_HPP

# include <iostream>

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
        // Constructor and destructors
        AForm();
        AForm(std::string f_name, int s_grade, int e_grade);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

        //Getters
        std::string GetName();
        bool GetSigned();
        int GetSignGrade();
        int GetExecGrade();
        
        //Excepciones
        std::string GradeTooHighException();
        std::string GradeTooLowException();
        
        //Funciones Aform
        bool beSigned(Bureaucrat &b) ;
};
//operators
std::ostream &operator<<(std::ostream &os,  AForm &Aform);
#endif
