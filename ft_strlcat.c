/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:33:01 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/14 13:35:42 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst,const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[j];
			i++;
		}
		dst[i] = '\0';
		}
	return(j);
}
int main()
{
	char dst[] = "adieu";
	char src[] = "salut";
	size_t dstsize = 6;


	printf("%zu\n", ft_strlcat(dst, src, dstsize));
	printf("%lu\n", strlcat(dst, src, dstsize));
}
