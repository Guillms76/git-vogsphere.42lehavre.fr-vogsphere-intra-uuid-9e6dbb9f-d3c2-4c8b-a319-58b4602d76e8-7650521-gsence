/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strcapitalize.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 19:00:48 by gsence           #+#    #+#              */
/*   Updated: 2026/09/07 19:50:40 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= 47)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("Avant : %s\n", str);
	ft_strcapitalize(str);
	printf("Apres : %s\n", str);
	return (0);
}
