/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:27:38 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/21 16:19:30 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int ch, size_t len)
{
	const char		*src;
	char			car;

	src = (const char *)source;
	car = (char)ch;
	while (len--)
	{
		if (*src == car)
			return ((void *)src);
		src++;
	}
	return (0);
}
