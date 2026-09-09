/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_recursive_factorial.c                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 23:07:06 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 23:20:31 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	return (n * ft_recursive_factorial(n - 1));
}

int	main(void)
{
	int	n;

	n = 5;
	printf("Factorielle de : %d\n", n);
	printf("Egal : %d\n", ft_recursive_factorial(n));
	return (0);
}
