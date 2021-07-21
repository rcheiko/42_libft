/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:34:13 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/27 15:20:55 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char *str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		if (str1[i + 1] == '\0' && str2[i + 1] == '\0')
			return (0);
		i++;
		n--;
	}
	return (0);
}
