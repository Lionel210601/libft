/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:56:22 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 11:54:12 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ssize;
	size_t	dsize;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if (dstsize < dsize)
		return (ssize + dstsize);
	else
	{
		dst += dsize;
		ft_strlcpy(dst, src, dstsize - dsize);
		return (ssize + dsize);
	}
}
/*
int main()
{
	char * restrict dst = "WORLD";
	const char * restrict src = "HELLO";
	size_t dstsize = 0;

	printf("%zu\n", ft_strlcat(dst, src, dstsize));
}*/
