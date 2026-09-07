/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_div_mod.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/01 17:14:18 by gsence           #+#    #+#              */
/*   Updated: 2026/09/01 22:17:30 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 9;
// 	int	b = 2;
// 	int	div;
// 	int	mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a divise par b : %d\n", div);
// 	printf("Modulo: %d\n", mod);
// 	return (0);
// }
