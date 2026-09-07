/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_uppercase.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 16:05:26 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:36 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "abcdecfweeg";
// 	char	str2[] = "UIGUI";

// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	return (0);
// }
