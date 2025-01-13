/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:11:25 by hverdugo          #+#    #+#             */
/*   Updated: 2025/01/12 22:31:26 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*
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
*/
void	send(int pid, char *str)
{
	int	i;
	int	base;

	i = 0;
	while (str[i])
	{
		base = 6;
		while (base >= 0)
		{
			if (str[i] >> base & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			base--;
			usleep(20);
		}
		usleep(300);
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
