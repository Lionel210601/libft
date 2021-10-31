/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:13:19 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/30 09:19:46 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	signe;
	size_t	result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		signe = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0' + (result * 10));
		i++;
	}
	return (result * signe);
}
/*
int main()
{
	const char str[] = "-219";
	printf("%d\n", ft_atoi(str));
}*/
