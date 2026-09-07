/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlowcase.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 18:49:44 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:42 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "WESH LA TEAM ";

// 	printf("avant : %s \n", str);
// 	ft_strlowcase(str);
// 	printf("apres :%s \n", str);
// 	return (0);
// }
