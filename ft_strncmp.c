/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:18:31 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/19 17:38:18 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t c;

	c = 0;
	if (n == c)
		return (0);
	while (s1[c] == s2[c] && s1[c] != '\0' && c < n)
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
/*
int main()
{
	const char *s1 = "loh";
	const char *s2 = "lloho";
	size_t n = 1;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
}*/
