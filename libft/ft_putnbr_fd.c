/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:56:46 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/07 15:01:20 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	prntchar(char n, int fd)
{
	n = n + 48;
	write(fd, &n, 1);
}

static void	min_max(int n, int fd)
{
	if (n > 0)
		write(fd, "2147483647", 10);
	else
		write(fd, "-2147483648", 11);
}

static void	neg(int n, int fd)
{
	char	num[12];
	size_t	i;

	i = 0;
	write(fd, "-", 1);
	n = n * -1;
	while (n > 0)
	{
		num[i] = n % 10;
		n = n / 10;
		i++;
	}
	while (i--)
		prntchar(num[i], fd);
}

static void	pos(int n, int fd)
{
	char	num[11];
	size_t	i;

	i = 0;
	while (n > 0)
	{
		num[i] = n % 10;
		n = n / 10;
		i++;
	}
	while (i--)
		prntchar(num[i], fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 2147483647 || n == -2147483648)
		min_max(n, fd);
	else if (n < 0)
		neg(n, fd);
	else if (n > 0)
		pos(n, fd);
	else
		write(fd, "0", 1);
}
