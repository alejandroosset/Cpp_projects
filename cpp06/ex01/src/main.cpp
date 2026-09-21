/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:52:31 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/21 12:54:01 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *data = new Data ("Alex", 42);
	

	uintptr_t raw = Serializer::serialize(data);
	Data *serialized = Serializer::deserialize(raw);

	std::cout << serialized->GetName() << std::endl;
	std::cout << serialized->GetAge() << std::endl;

	delete data;
	return (0);
}