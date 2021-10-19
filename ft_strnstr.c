/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:21:28 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:38:08 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (haystack[j] == '\0')
		return (NULL);
	if (needle[i] == '\0' || needle == NULL)
		return ((char*)haystack);
	while (needle[i] != '\0' && len > j)
	{
		i = 0;
		while (needle[i] == haystack[j + i] && len > i + j && len < ft_strlen(haystack))
		{
			if (needle[i + 1] == '\0')
				return ((char*)haystack + j);
			i++;
		}
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
