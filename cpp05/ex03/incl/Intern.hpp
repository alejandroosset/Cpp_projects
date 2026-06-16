/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:02:53 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/16 12:03:48 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

class AForm;

class Intern
{
	private:

	public:
		// Constructors and destructors
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();

		// Funciones
		AForm	*makeForm(const std::string form_name, const std::string form_target) ;
};

#endif