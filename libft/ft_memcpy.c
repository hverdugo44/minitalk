/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:50:53 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/31 17:21:15 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
