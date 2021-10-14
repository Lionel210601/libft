/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:53:43 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/12 17:01:59 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}
//int main()
//{
//	printf("%d\n", ft_isdigit('5'));
//}