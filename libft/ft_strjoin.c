/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:55:04 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/14 12:54:02 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	size_t	y;
	char	*join;

	i = 0;
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (x + y + 1));
	if (join == NULL)
		return (NULL);
	while (i < x)
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < y)
	{
		join[x + i] = s2[i];
		i++;
	}
	join[x + i] = '\0';
	return (join);
}
