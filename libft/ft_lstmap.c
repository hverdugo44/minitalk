/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:21:02 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/06 13:33:55 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		t = ft_lstnew(f(lst->content));
		if (!t)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new, t);
		lst = lst->next;
	}
	return (new);
}
