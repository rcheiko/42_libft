/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:42:11 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/21 15:07:01 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)pointer;
	i = 0;
	while (count-- > 0)
	{
		ptr[i] = value;
		i++;
	}
	return (ptr);
}
