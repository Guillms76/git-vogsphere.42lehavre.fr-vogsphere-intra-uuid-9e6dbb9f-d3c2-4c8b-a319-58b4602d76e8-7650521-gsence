/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 16:35:21 by gsence           #+#    #+#              */
/*   Updated: 2026/09/09 22:26:20 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// La fonction strlcat en langage C permet de concaténer (ajouter)
// une chaîne de caractères à la fin d'une autre de manière sécurisée
// en respectant la taille maximale du tampon de destination

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	a;
	unsigned int	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	a = 0;
	if (size > len_d)
		a = len_s + len_d;
	else
		a = len_s + size;
	i = 0;
	while (src[i] && len_d <= size)
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (a);
}

int	main(void)
{
	char			destination[20] = "Hello";
	char			source[20] = ", world!";
	unsigned int	a = ft_strlcat(destination, source, 1);

	printf("Resultat : %s\n", destination);
	printf("Source : %s\n", source);
	printf("Length: %d\n", a);
}
