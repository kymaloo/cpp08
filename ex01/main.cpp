/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:03:59 by trgaspar          #+#    #+#             */
/*   Updated: 2025/07/02 13:18:15 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		Span sp = Span(5);

		unsigned int tab[] = {9, 11};
		std::vector<unsigned int> vec(tab, tab + 2);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		//sp.addNumber(9);
		// sp.addNumber(11);
		sp.addMultipleNumber(vec);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}