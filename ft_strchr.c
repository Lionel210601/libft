/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:49:39 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 11:51:07 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) != '\0' && (*s) != c)
		s++;
	if ((*s) == c)
		return ((char *)s);
	else
		return (NULL);
}
/*
int main()
{
	const char *s = "hello";
	int c = 'l';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}*/
