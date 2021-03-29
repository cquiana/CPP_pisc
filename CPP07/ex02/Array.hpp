/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 06:28:18 by cquiana           #+#    #+#             */
/*   Updated: 2021/03/28 10:08:23 by cquiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	size_t _size;
	T * _data;
public:
	Array() : _size(0), _data(0){}
	Array(size_t size) : _size(size), _data(new T[size]) {}
	virtual ~Array()
	{
		delete [] _data;
	}
	Array(const Array<T> &old)
	{
		*this = old;
	}
	size_t size() const
	{
		return _size;
	}
	Array &operator=(const Array<T> &old)
	{
		if (this != &old)
		{
			_data = new T [old._size];
			_size = old._size;
			for (size_t i = 0; i < old._size; i++)
				_data[i] = old._data[i];
		}
		return (*this);
	}
	T operator[](size_t i) const
	{
		if (i >= _size)
			throw incorrectIndex();
		return _data[i];
	}

	T &operator[](size_t i)
	{
		if (i >= _size)
			throw incorrectIndex();
		return _data[i];
	}

	void setData(size_t i, T data)
	{
		_data[i] = data;
	}

	class incorrectIndex : public std::exception
	{
	public:
		virtual const char *what() const throw ()
		{
			return ("Incorrect index for this array!");
		}
	};
};

#endif
