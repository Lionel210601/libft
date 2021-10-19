/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:20:35 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 16:51:23 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, 0, ft_strlen(s));
}
/*
int main(void)
{
	char	*s;
	size_t	n = 0;

	s = ft_strdup("saluuuuut");
	printf("%s\n", bzero(s, 5));
}*/
