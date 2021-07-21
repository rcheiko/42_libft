/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:03:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/27 14:36:51 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	char		*dest;
	const char	*src;
	size_t		i;

	i = 0;
	dest = (char *)destination;
	src = (const char *)source;
	if (dest == NULL && src == NULL)
		return (dest);
	while (size > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
