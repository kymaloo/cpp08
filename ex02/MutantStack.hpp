/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:11:29 by trgaspar          #+#    #+#             */
/*   Updated: 2025/07/03 10:19:33 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iterator>
#include <iostream>

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack(const MutantStack &cpy){(void)cpy;}
		MutantStack &operator=(const MutantStack &ref){(void)ref; return (*this);}
		typedef typename container::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

#endif