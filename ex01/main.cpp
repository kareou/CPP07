/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:29:40 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/14 17:38:23 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T & x ) {
	x += 1;
	// std::cout << x << std::endl;
}

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print2( T & x ) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << std::endl;
	iter( tab2, 5, print2 );
	return 0;
}
