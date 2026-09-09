/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/08 15:43:28 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 22:24:13 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction strstr en langage C
// recherche la première occurrence d'une sous-chaîne (l'aiguille)
// dans une chaîne de caractères principale (la meule de foin)

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "lo";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
