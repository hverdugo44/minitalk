/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:50:00 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/24 12:06:58 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			x;
	unsigned char	*s;

	s = (unsigned char *)str;
	x = 0;
	while (n--)
	{
		if (s[x] == (unsigned char)c)
			return (&s[x]);
		x++;
	}
	return (NULL);
}
