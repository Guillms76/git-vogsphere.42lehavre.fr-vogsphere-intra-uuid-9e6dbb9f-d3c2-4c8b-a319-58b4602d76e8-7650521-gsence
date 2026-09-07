/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_str_is_printable.c                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 18:20:08 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:34:39 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hola Mundo!";
// 	char	str2[] = "Hello\x0AWorld";

// 	printf("Chaine 1 : %d\n", ft_str_is_printable(str1));
// 	printf("Chaine 2 : %d\n", ft_str_is_printable(str2));
// 	return (0);
// }
