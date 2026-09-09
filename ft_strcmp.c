/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 19:31:06 by gsence           #+#    #+#              */
/*   Updated: 2026/09/10 00:13:12 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction ft_strncmp
// compare au maximum les n premiers caractères de deux chaînes de caractères
// (s1 et s2) selon l'ordre lexicographique (valeurs ASCII)
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
	char			s1[] = "hello";
	char			s2[] = "hkdiasfssfsf";
	unsigned int	n;

	n = 10;
	printf("%s", ft_strncmp(s1, s2, n));
	return (0);
}
