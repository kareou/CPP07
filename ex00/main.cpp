/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:05:31 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/14 11:13:31 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	std::cout << min(a, b) << std::endl;
	std::cout << max(a, b) << std::endl;
	swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}
