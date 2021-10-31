/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:49:39 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/30 09:08:37 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
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
