/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:04:28 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/25 12:22:27 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t i;
	size_t j;
	size_t m;

	i = 0;
	j = 0;
	if (tofind[j] == '\0')
		return ((char *)&str[0]);
	while (str[i] && i < len)
	{
		j = 0;
		m = i;
		while (tofind[j] != '\0' && str[m] == tofind[j])
		{
			if (tofind[j + 1] == '\0' && tofind[j] == str[m] && len >= m)
				return ((char *)&str[i]);
			j++;
			m++;
		}
		i++;
	}
	return (0);
}
