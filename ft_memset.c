/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:46:24 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 11:50:48 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*pb;
	unsigned char	cc;

	pb = b;
	cc = (unsigned char) c;
	while (len--)
	{
		*pb = cc;
		pb ++;
	}
	return (b);
}
/*
int main()
{
	char *str;
	int c = 'b';
	size_t len = 2;
	str = ft_strdup("salut");

	printf("%s\n", str);
	ft_memset(str, c, len);
	printf("%s\n", str);
}*/
