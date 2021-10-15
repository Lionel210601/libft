/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwirth <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:15:35 by lwirth            #+#    #+#             */
/*   Updated: 2021/10/15 09:44:48 by lwirth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
	
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(const char *src, char *dest, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_atoi(const char *str);
int		ft_isalpha(char c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *foin, const char *aiguille, size_t len);

#endif
