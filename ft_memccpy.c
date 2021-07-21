/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:20:12 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/27 14:10:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int ch, size_t len)
{
	unsigned char			*dest;
	unsigned const char		*src;
	size_t					i;

	i = 0;
	dest = (unsigned char *)destination;
	src = (unsigned const char *)source;
	while (len > i)
	{
		dest[i] = src[i];
		if ((dest[i]) == (unsigned char)ch)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
