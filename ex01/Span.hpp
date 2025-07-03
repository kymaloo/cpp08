/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:03:57 by trgaspar          #+#    #+#             */
/*   Updated: 2025/07/02 12:39:21 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _N;
		unsigned int _result;
		unsigned int _howNumberInVector;
		std::vector<unsigned int> _vec;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &cpy);
		Span &operator=(const Span &ref);
		void addNumber(unsigned int N);
		unsigned int smallNumber(void);
		unsigned int bigNumber(void);
		unsigned int longestSpan(void);
		unsigned int shortestSpan(void);
		void addMultipleNumber(std::vector<unsigned int> vec);
	public :
		class numberLimitForVector : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif