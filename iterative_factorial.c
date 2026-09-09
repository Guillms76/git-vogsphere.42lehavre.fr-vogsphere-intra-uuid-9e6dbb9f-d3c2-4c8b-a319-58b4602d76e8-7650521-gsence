/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   iterative_factorial.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 23:00:43 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 23:11:45 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		return (0);
	while (n > 1)
	{
		i = i * n;
		n--;
	}
	return (i);
}

int	main(void)
{
	int	n;

	n = 6;
	printf("Factorielle de : %d\n", n);
	printf("Egal : %d\n", ft_iterative_factorial(n));
	return (0);
}
