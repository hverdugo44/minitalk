/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:56:54 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/24 11:37:50 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t x)
{
	size_t	j;

	j = 0;
	if (x == 0)
		return (ft_strlen(src));
	while (j < (x - 1) && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen(src));
}
