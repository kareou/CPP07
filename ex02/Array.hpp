/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:55:26 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/14 20:34:15 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T> class Array
{
private:
	T* array;
	int _size;
public:
	Array() : array(NULL)
	{
		_size = 0;
	}
	Array(unsigned int n)
	{
		try
		{
			array = new T[n];
			_size = n;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	~Array()
	{
		delete[] array;
	}

	Array(const Array& copy)
	{
		this->array = NULL;
		*this = copy;
	}
	Array& operator=(const Array& copy)
	{
		if(this != &copy)
		{
			if (array)
				delete[] array;
			array = new T[copy.size()];
			_size = copy.size();
			for (int i = 0; i < copy.size(); i++)
			{
				array[i] = copy.array[i];
			}
		}
		return(*this);
	}

	int size() const
	{
		return (_size);
	}
	T& operator[](int i)
	{
		if (i < 0 || i >= (int)size() || _size == 0)
			throw std::range_error("the index is out of range");
		return(array[i]);
	}
};


