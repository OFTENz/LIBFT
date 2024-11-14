/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:34:51 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/05 17:52:13 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_failed(t_list **a, void (*del)(void *))
{
	ft_lstclear(a, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*prev_p;

	if (!lst || !f || !del)
		return (NULL);
	p = ft_lstnew(f(lst->content));
	if (!p)
		return (ft_failed (&p, del));
	prev_p = p;
	lst = lst->next;
	while (lst)
	{
		p->next = ft_lstnew(f(lst->content));
		if (!(p->next))
			return (ft_failed (&prev_p, del));
		lst = lst->next;
		p = p->next;
	}
	p->next = NULL;
	return (prev_p);
}
