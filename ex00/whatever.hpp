/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:58:44 by yuliano           #+#    #+#             */
/*   Updated: 2026/04/03 13:58:47 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T	&max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif