/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:40:53 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/29 15:01:38 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*block;

	if (lst)
	{
		while (*lst)
		{
			block = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = block;
		}
	}
}
