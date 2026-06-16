/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:08:43 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 10:24:28 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
        virtual void executeAction() const;
    public:
        // Constructors and destructors
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        //Excepciones
            class PresidentialFailed : public std::exception
            {
                public:
                    virtual const char *what() const throw();
            };        
};

#endif
