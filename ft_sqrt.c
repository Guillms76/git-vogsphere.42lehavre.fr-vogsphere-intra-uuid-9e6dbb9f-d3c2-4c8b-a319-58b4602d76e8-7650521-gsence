/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sqrt.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/10 00:25:05 by gsence           #+#    #+#              */
/*   Updated: 2026/09/10 00:54:38 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// consiste à coder votre propre version de la fonction racine carrée (sqrt),
// en retournant uniquement un nombre entier si la racine est parfaite, ou 0 si elle ne l'est pas.

#include <stdio.h>

int	ft_sqrt(int n)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (n < 0)
		return (0);
	while (r < n && i <= 99999)
	{
		r = i * i;
		if (r == n)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	n;

	n = -25;
	printf("la racine carree de % d est % d", n, ft_sqrt(n));
	return (0);
}
