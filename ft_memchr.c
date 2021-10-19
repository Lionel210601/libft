/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:37:12 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:09:51 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *zebi;
	int i;	
	
	i = 0;
	zebi = (unsigned char *)s;
	while (zebi[i] < n)
	{
		if (zebi[i] == c)
			return (zebi + 1);
		i++;
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
