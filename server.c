/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:21:03 by hverdugo          #+#    #+#             */
/*   Updated: 2025/01/12 15:30:45 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*
void	convert(int byte)
{
	int	res;
	int	base;
	int	max;

	max = 8;
	base = 1;
	res = 0;
	while (max > 0)
	{
		res = res + ((byte % 2) * base);
		base = base * 2;
		byte = byte / 10;
		max--;
	}
	ft_putchar_fd((char)res, 1);
}
*/
void	text(int signal)
{
	static char	c = 0;
	static int	i = 0;

	if (signal == SIGUSR2)
		c |= 1;
	i++;
	if (i == 7)
	{
		i = 0;
		write(1, &c, 1);
		c = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	int	i;

	i = getpid();
	ft_putstr_fd("Bienvenido a mi servidor, el pid es:	", 1);
	ft_putnbr_fd(i, 1);
	while (1)
	{
		signal(SIGUSR1, text);
		signal(SIGUSR2, text);
	}
	return (0);
}
