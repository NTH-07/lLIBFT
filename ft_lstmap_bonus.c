/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 02:26:20 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/11 02:26:35 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*node;
	t_list	*curr;

	curr = lst;
	lst_new = NULL;
	if (!lst || !f || !del)
		return (0);
	while (curr)
	{
		node = ft_lstnew(f(curr->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (0);
		}
		ft_lstadd_back(&lst_new, node);
		curr = curr->next;
	}
	return (lst_new);
}
