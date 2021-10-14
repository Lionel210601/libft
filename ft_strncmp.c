/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:11:16 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/12 12:57:59 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ( n == i)
		return(0);
	while (s1[i] == s2[i] && i < n && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	size_t n = 24;
	const char s1[] = "adieu";
	const char s2[] = "adichard";

	printf("%d\n",ft_strncmp(s1, s2, n));
}
