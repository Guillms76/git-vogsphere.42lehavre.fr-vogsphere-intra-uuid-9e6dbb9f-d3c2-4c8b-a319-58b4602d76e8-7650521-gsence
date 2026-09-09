/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_iterative_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 23:21:01 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 23:24:42 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int n, int power)
{
	int	i;
	int	j;

	i = 1;
	j = n;
	if (power < 0)
		return (0);
	if (power == 0 || n == 0)
		return (1);
	while (i < power)
	{
		n = n * j;
		//nombre de fois ou etre multipile n
		i++;
	}
	return (n);
}

int	main(void)
{
	int	n;
	int	power;

	n = 5;
	power = 2;
	printf("%d puissance %d\n", n, power);
	printf("Egal : %d\n", ft_iterative_power(n, power));
	return (0);
}
