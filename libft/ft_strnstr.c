/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:10:25 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/02 12:36:39 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t l)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[x])
	{
		y = 0;
		while (s1[x + y] == s2[y] && (x + y) < l)
		{
			if (s1[x + y] == 0 && s2[y] == 0)
				return ((char *)&s1[x]);
			y++;
		}
		if (s2[y] == 0)
			return ((char *)&s1[x]);
		x++;
	}
	return (NULL);
}
