/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:31:11 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/02 13:52:37 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	dup = NULL;
	dup = ft_calloc(sizeof(char), len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[start + i];
		i++;
	}
	return (dup);
}
