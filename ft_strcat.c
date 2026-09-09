/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcat.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/08 14:56:21 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 20:22:32 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction strcat en langage C sert à coller (ou concaténer) une chaîne de caractères à la fin d'une autre

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
	char			dest[5] = "Hello ";
	char			src[] = "World!\n";
	unsigned int	nb;

	nb = 5;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}
