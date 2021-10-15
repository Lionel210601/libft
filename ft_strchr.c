/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:40:11 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/15 11:06:16 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if ( s[i] == (char)c)
			return((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return(NULL);
}
int main()
{
	char s[] = "salut sest moi sacha";
	int c = 20;

	printf("%s\n", ft_strchr(s, c));
}
