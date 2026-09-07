/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_alpha.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 14:22:13 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:31 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z' && *str < 'a' || *str > 'z')
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
// 	char	str2[] = "ab@";

// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	return (0);
// }
