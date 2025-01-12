/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:51:04 by hverdugo          #+#    #+#             */
/*   Updated: 2024/07/02 16:00:46 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t x, size_t y)
{
	size_t	i;
	void	*str;

	i = x * y;
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, i);
	return (str);
}
