/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_fibonacci.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 23:50:35 by gsence           #+#    #+#              */
/*   Updated: 2026/09/10 01:01:25 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La suite de Fibonacci est une suite de nombres entiers
// où chaque terme est la somme des deux termes qui le précèdent,
// en commençant par 0 et 1. [1]
// Les premiers termes de la suite de Fibonacci sont :
// F₀ = 0
// F₁ = 1
// F₂ = 1 (0 + 1)
// F₃ = 2 (1 + 1)
// F₄ = 3 (1 + 2)
// F₅ = 5 (2 + 3)
// F₆ = 8 (3 + 5)
// F₇ = 13 (5 + 8)
// F₈ = 21 (8 + 13)
// F₉ = 34 (13 + 21) [1]
// F_{n+2} = F_{n+1} + F_n\

#include <stdio.h>

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

int	main(void)
{
	int	i;

	i = 5;
	printf("Fibonacci de %d est %d\n", i, ft_fibonacci(i));
	return (0);
}
