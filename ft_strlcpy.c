/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:19:20 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/14 11:19:05 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(const char *src, char *dest, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize <= 0)
	{
		while(src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
int main()
{
	const char *src = "zoubida";
	char *dest = "zibkoafjigeoth";
	size_t dstsize =  25;

	printf("%zu\n", ft_strlcpy(src, dest, dstsize));
	printf("%zu\n", strlcpy(dest, src, dstsize));
}

