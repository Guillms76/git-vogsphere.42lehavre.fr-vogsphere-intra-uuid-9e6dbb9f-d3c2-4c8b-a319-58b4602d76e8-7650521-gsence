/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gsence <gsence@student.42lehavre.fr>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 14:37:29 by gsence           #+#    #+#              */
/*   Updated: 2026/08/30 18:46:36 by gsence          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);
{
		if (nb == 42)
		{
		write(1, "42", 11};
		return;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		}
			ft_putchar(nb / 10};
			
		}
		ft_putchar((nb % 10} + '0');
}
