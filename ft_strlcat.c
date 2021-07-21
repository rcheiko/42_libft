/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:00:42 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/21 14:50:57 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	result;

	s = 0;
	d = 0;
	result = 0;
	while (dest[d])
		d++;
	while (src[result])
		result++;
	if (size == 0)
		return (result);
	if (d >= size)
		return (result + size);
	result = result + d;
	while (src[s] && d + 1 < size)
		dest[d++] = src[s++];
	dest[d] = '\0';
	return (result);
}
