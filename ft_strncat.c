/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/08 15:08:20 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 22:23:08 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction strncat en langage C permet d'ajouter un nombre maximal
// de caractères d'une chaîne source à la fin d'une chaîne destination,
// tout en garantissant l'ajout d'un caractère nul (\0) terminal.

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
	char			dest[255] = "Hello";
	char			src[] = "World! \n";
	unsigned int	nb;

	nb = 5;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}
