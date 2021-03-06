/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:21:28 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/30 10:52:58 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (needle[i] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (needle[i] != '\0' && len > j && ft_strlen(haystack))
	{
		while (needle[i] == haystack[j + i] && len > i + j)
		{
			if (needle[i + 1] == '\0')
				return (&((char *) haystack)[j]);
			i++;
		}
		i = 0;
		j++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char haystack[50] = "sa";
	const char needle[50] = "sal";
	//size_t len = 6;
	
	printf("%s\n", strnstr(haystack, needle, 6));
	printf("%s\n", ft_strnstr(haystack, needle, 6));
}*/
