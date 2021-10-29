/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:44:56 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/29 15:28:22 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*block_f;

	if (!lst)
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		block_f = ft_lstnew(f(lst->content));
		if (!block_f)
			ft_lstclear(&block_f, (*del));
		else
			ft_lstadd_back(&lst2, block_f);
		lst = lst->next;
	}
	return (lst2);
}
