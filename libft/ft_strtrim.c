/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:30:42 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/02 13:47:07 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	x;
	size_t	y;
	char	*dup;

	dup = 0;
	x = 0;
	y = ft_strlen(s1);
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (s1[y - 1] && ft_strchr(set, s1[y - 1]) && y > x)
		y--;
	dup = (char *)malloc(sizeof(char) * (y - x + 1));
	if (dup)
		ft_strlcpy(dup, &s1[x], y - x + 1);
	return (dup);
}
