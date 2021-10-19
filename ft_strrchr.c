/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:27:21 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:39:05 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while ((*s) <= c)
	{
		if ((*s) == c)
			return ((char*)s);
		s--;
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
