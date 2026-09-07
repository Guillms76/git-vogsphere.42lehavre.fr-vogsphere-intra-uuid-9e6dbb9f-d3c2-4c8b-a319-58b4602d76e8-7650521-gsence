/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/02 19:13:56 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:28 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char			dest[15];
// 	char			*src;
// 	unsigned int	n;

// 	src = "Hello World!";
// 	n = 5;
// 	ft_strncpy(dest, src, n);
// 	printf("%s \n", src);
// 	printf("Si n : %d \n", n);
// 	printf("Alors : %s \n", dest);
// 	return (0);
// }
