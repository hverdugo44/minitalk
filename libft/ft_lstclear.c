/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:57:39 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/06 13:07:33 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t1;

	if (!*lst)
		return ;
	while (*lst)
	{
		t1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = t1;
	}
	(*lst) = NULL;
}
