/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:03:55 by trgaspar          #+#    #+#             */
/*   Updated: 2025/07/02 13:30:37 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	_N = N;
	_result = 0;
	_howNumberInVector = 0;
}

Span &Span::operator=(const Span &ref)
{
	this->_N = ref._N;
	return (*this);
}

Span::Span(const Span &cpy)
{
	this->_N = cpy._N;
}

Span::~Span()
{
	
}

void Span::addNumber(unsigned int N)
{
	if (_howNumberInVector >= _N)
	{
		throw numberLimitForVector();
		return ;
	}
	_vec.push_back(N);
	_howNumberInVector++;
}

unsigned int Span::smallNumber(void)
{
	unsigned int small = _vec[0];
	
	for (unsigned int i = 0; i != _N; i++)
	{
		if (_vec[i] < small)
			small = _vec[i];
	}
	return (small);
}

unsigned int Span::bigNumber(void)
{
	unsigned int big = _vec[0];
	
	for (unsigned int i = 0; i != _N; i++)
	{
		if (_vec[i] > big)
			big = _vec[i];
	}
	return (big);
}

unsigned int Span::longestSpan(void)
{
	return (bigNumber() - smallNumber());
}

unsigned int Span::shortestSpan(void)
{
	std::vector<unsigned int> tmp = _vec;
	unsigned int i = 0;
	unsigned int result = tmp[0] + tmp[_N - 1];

	std::stable_sort(tmp.begin(), tmp.end());
	while (i != _N - 1)
	{
		if (i != _N - 1 && result > (tmp[i + 1] - tmp[i]))
			result = tmp[i + 1] - tmp[i];
		i++;
	}
	return (result);
}

void Span::addMultipleNumber(std::vector<unsigned int> vec)
{
	unsigned int i = 0;
	unsigned int _cpt = 0;
	unsigned int cpt = 0;

	while (i != vec.size())
	{
		i++;
		cpt++;
	}
	i = 0;
	while (i != _vec.size())
	{
		i++;
		_cpt++;
	}
	i = 0;
	if (cpt + _cpt > _N - 1)
	{
		throw numberLimitForVector();
		return ;
	}
	while (vec[i])
	{
		_vec.push_back(vec[i]);
		i++;
	}
}

const char *Span::numberLimitForVector::what() const throw()
{
	return ("Aie Aie Aie limit");
}