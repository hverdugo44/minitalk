/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:50:21 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/25 11:16:05 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t x)
{
	size_t	j;

	j = 0;
	if (x == 0)
		return (ft_strlen(src));
	while (dest[j] != '\0' && j < x)
		j++;
	ft_strlcpy(&dest[j], src, x - j);
	return (j + ft_strlen(src));
}
