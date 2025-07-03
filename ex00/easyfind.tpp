/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:09:06 by trgaspar          #+#    #+#             */
/*   Updated: 2025/06/30 15:47:58 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
void easyfind(T &type, int i)
{
	typename T::iterator it;

	it = find(type.begin(), type.end(), i);
	if (it == type.end())
		throw std::exception();
	std::cout << "Integer found\n";
}

#endif