/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/02 17:14:46 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:29 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "olleH";

// 	printf("%s\n", str1);
// 	ft_strcpy(str1, str2);
// 	printf("%s\n", str1);
// 	return (0);
// }
