/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:29:02 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/31 17:44:02 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		x;

	x = 0;
	while (str[x] != 0)
	{
		if (str[x] == (char)c)
			return ((char *)&str[x]);
		x++;
	}
	if ((char)c == 0)
		return ((char *)&str[ft_strlen(str)]);
	return (NULL);
}
