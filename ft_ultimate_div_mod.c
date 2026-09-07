/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ultimate_div_mod.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/01 18:09:20 by gsence           #+#    #+#              */
/*   Updated: 2026/09/01 22:17:30 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a = 58469176;
// 	int	b = 42;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a divise par b : %d\n", a);
// 	printf("Modulo: %d\n", b);
// 	return (0);
// }
