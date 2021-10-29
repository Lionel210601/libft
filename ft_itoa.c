/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:46:55 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/29 15:00:20 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcpy2(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i++])
		dest[i] = src[i];
	return (dest);
}

size_t	ft_nb_len(int n)
{
	size_t	count;

	count = 0;
	if (n == -2147483648)
		return (count = 11);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_glitchnormi(int nb, char *str, size_t size)
{
	int	i;

	i = size;
	if (nb == -2147483648)
		ft_strcpy2(str, "-2147483648");
	if (!nb)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	str[size + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		nb;

	if (n > 2147483647 || n < -2147483648)
		return (NULL);
	nb = n;
	size = ft_nb_len(n);
	str = malloc((sizeof(char) * size) + 1);
	if (!str)
		return (NULL);
	return (ft_glitchnormi(nb, str, size));
}	
