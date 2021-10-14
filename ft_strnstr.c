/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:49:44 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/14 15:31:46 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	ft_strnstr( const char *foin, const char *aiguille, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	if (foin[j] == '\0')
		return(NULL);
	if (aiguille[i] == '\0' || aiguille == NULL)
		return((char*)foin);
	while(aiguille[i] != '\0' && len > j && len < ft_strlen(foin))
	{
		i = 0;
		while(aiguille[i] == foin[j + i] && i + j < len)
		{
			if (aiguille[i + 1] == '\0')
				return((char*)foin + j);
			i++;
		}
		j++;
	}
	return(NULL);
}
int main(void)
{
	const char *foin = "salle";
	const char *aiguille = "salu";
	size_t len = 6;

	printf("%s\n", strnstr(foin, aiguille, len));
	printf("%s\n", ft_strnstr(foin, aiguille, len));
}
