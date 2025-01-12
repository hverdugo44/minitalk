/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:13:56 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/31 17:41:54 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = ft_strlen(str);
	while (str[x] != (char)c && x > 0)
		x--;
	if (str[x] == (char)c)
		return ((char *)&str[x]);
	return (NULL);
}
