/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 22:45:01 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 22:36:47 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction ft_strncmp sert à comparer les n premiers caractères de deux chaînes de caractères.

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
{
	char			s1[] = "tesvqYU";
	char			s2[] = "testADFGGGGGSD";
	unsigned int	n;

	n = 5;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
