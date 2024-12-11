/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:11:25 by hverdugo          #+#    #+#             */
/*   Updated: 2024/11/27 14:54:22 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	convert(int c)
{
	int	base;
	int	res;
	int	potencia;

	base = 7;
	res = 0;
	potencia = 1;
	while (base > 0)
	{
		res = res + ((c % 2) * potencia);
		c = c / 2;
		potencia = potencia * 10;
		base--;
	}
	return (res);
}

void	send(int pid, char *str)
{
	int	i;
	int	x;
	int	base;

	i = 0;
	while (str[i])
	{
		base = 7;
		x = convert(str[i]);
		while (base > 0)
		{
			if (x % 2 == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			x = x / 10;
			base--;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	send(ft_atoi(argv[1]), argv[2]);
	return (0);
}
