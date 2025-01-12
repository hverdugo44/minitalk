/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:56:11 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/22 09:18:13 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contador(int n)
{
	int	x;

	x = 0;
	if (n <= 0)
		x++;
	while (n != 0)
	{
		x++;
		n = n / 10;
	}
	return (x);
}

static char	*neg(char *str, int n, int largo)
{
	str[largo] = -(n % 10) + 48;
	largo--;
	n = n / -10;
	while (n >= 1)
	{
		str[largo] = (n % 10) + 48;
		largo--;
		n = n / 10;
	}
	str[0] = '-';
	return (str);
}

static char	*pos(char *str, int n, int largo)
{
	while (n >= 1)
	{
		str[largo] = (n % 10) + 48;
		largo--;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*at;
	int		x;

	x = contador(n);
	at = (char *)malloc(sizeof(char) * x + 1);
	if (at == NULL)
		return (NULL);
	at[x] = '\0';
	x--;
	if (n > 0)
		return (pos(at, n, x));
	else if (n < 0)
		return (neg(at, n, x));
	else
		at[0] = '0';
	return (at);
}
