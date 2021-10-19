/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:22 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:21:24 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i < ft_strlen(dst))
		i++;
	return (i + dstsize);
}
/*
int main()
{
	char * restrict dst = "WORLD";
	const char * restrict src = "HELLO";
	size_t dstsize = 0;

	printf("%zu\n", ft_strlcat(dst, src, dstsize));
}*/
