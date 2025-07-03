/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:06:25 by trgaspar          #+#    #+#             */
/*   Updated: 2025/06/30 15:47:40 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> containerInt;

	for (int i = 0; i < 10; i++)
		containerInt.push_back(i);
	try
	{
		easyfind(containerInt, 8);
		easyfind(containerInt, 12);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Integer not found" << '\n';
	}
}
