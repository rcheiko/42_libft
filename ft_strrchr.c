/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:26:19 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/27 13:02:48 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int size;

	size = ft_strlen(s);
	i = 0;
	if ((char)c == '\0')
		return ((char *)&s[size]);
	if (s[i] == 0 && c == 0)
		return (0);
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
