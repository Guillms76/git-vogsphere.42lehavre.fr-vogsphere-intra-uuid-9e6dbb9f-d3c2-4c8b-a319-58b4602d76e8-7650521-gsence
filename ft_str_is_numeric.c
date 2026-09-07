/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_numeric.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 15:19:41 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:33 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "156789";
// 	char	str2[] = "598ab@";

// 	printf("%d\n", ft_str_is_numeric(str1));
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	return (0);
// }
