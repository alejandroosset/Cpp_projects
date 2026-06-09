/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:12:09 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/09 18:58:04 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors and destructors
Form::Form() : name("default"), sign_grade(1), exec_grade(1)
{
    this->is_signed = false;
}

Form::Form(std::string f_name, int s_grade, int e_grade) : name(name), sign_grade(s_grade), exec_grade(e_grade)
{
    this->is_signed = false;
}

Form::Form(const Form& other) : name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
    *this = other;
}

Form& Form::operator=(const Form& other) 
{
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

Form::~Form() 
{
}
