/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:38:04 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:14:38 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len >= 0)
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
	}
	if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int main()
{
	char src[50] = "adieurichard";
	char dst[50] = "salutcheu";
	ft_memmove(dst, src, 20);
	printf("%s\n", dst);
	printf("%s\n", memmove(dst, src, 20));
}*/

