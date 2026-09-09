/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_recursive_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 23:29:33 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 23:30:50 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int n, int power)
{
	if (power == 0 || n == 0)
		return (1);
	if (power < 0)
		return (0);
	return (n * ft_recursive_power(n, power - 1));
}

int	main(void)
{
	int	n;
	int	power;

	n = -5;
	power = 2;
	printf("Puissance de : %d par %d\n", n, power);
	printf("Egal : %d\n", ft_recursive_power(n, power));
	return (0);
}
