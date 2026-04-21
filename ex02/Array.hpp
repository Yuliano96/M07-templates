/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:12:41 by yuliano           #+#    #+#             */
/*   Updated: 2026/04/21 10:31:02 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <exception>

template <class T>
class Array
{
	private:
		T				*_items;
		unsigned int	_size;

	public:
	
	Array() : _items(NULL), _size(0)
	{
	}

	Array(unsigned int n) : _items(new T[n]()), _size(n)
	{
	}

	Array(const Array &other) : _items(NULL), _size(0)
	{
		*this = other;
		/*
		se llama al operador de asignacion
		items == NULL, no hay problema con delete
		*/
	}

	Array &operator=(const Array &other)
	{
		unsigned int	i;
		T				*new_items;

		if (this != &other)
		{
			new_items = NULL;
			if (other._size > 0)
			{
				new_items = new T[other._size];
				i = 0;
				while (i < other._size)
				{
					new_items[i] = other._items[i];
					i++;
				}
			}
			delete [] _items;
			_items = new_items;
			_size = other._size;
		}
		return (*this);
	}

	~Array()
	{
		delete [] _items;
	}

	T &operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("index of range");
		return (_items[index]);
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("index of Range");
		return (_items[index]);
	}

	unsigned int size() const
	{
		return (_size);
	}
};

#endif