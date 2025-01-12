/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:26:24 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/31 16:49:26 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	char	*t1;
	char	*t2;

	if (!s1 && !s2)
		return (0);
	t1 = (char *)s1;
	t2 = (char *)s2;
	if (n == 0)
		return (0);
	x = 0;
	while ((t1[x] || t2[x]) && n > 1)
	{
		if (t1[x] != t2[x])
			return ((unsigned char)t1[x] - (unsigned char)t2[x]);
		x++;
		n--;
	}
	return ((unsigned char)t1[x] - (unsigned char)t2[x]);
}
