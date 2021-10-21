/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:34:30 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/21 13:38:53 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	size;
	size_t	i;

	i = 0;
	size = strlen(s) - start;
	if (len != size)
		return (NULL);
	str = malloc((sizeof(char) * len) + 1);
	while(s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
