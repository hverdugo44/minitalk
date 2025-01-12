/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:03:03 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/25 10:23:46 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		x;
	char	*dup;

	i = 0;
	x = ft_strlen((char *)s);
	dup = (char *)malloc(sizeof(char) * x + 1);
	if (!dup)
		return (NULL);
	while (i < x)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
