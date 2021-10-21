/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:37:12 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 11:47:09 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*zebi;
	unsigned char		yazebi;

	i = 0;
	zebi = (unsigned char *)s;
	yazebi = (unsigned char)c;
	while (i < n)
	{
		if (*zebi == yazebi)
			return (zebi);
		i++;
		zebi++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "adieu";
	printf("%s\n", s);
	printf("%s\n", memchr(s, 'd', 4));
}*/
