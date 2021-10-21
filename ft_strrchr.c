/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:27:21 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 11:57:47 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*zebi;

	zebi = (char *)s;
	i = ft_strlen(zebi);
	while (i >= 0)
	{
		if (zebi[i] == c)
		{
			return (&zebi[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int main()
{
	const char *s = "ehllo";
	int c = 'h';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}*/
