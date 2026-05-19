/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:13:02 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 13:32:45 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string name);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();
		
		void setIdea(int i, std::string idea);
		std::string getIdea(int i);
};
#endif