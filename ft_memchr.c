/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihancer <ihancer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:12:24 by ihancer           #+#    #+#             */
/*   Updated: 2024/10/28 22:03:55 by ihancer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	c = (unsigned char)c;
	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == c)
			return ((void *)(d + i));
		i++;
	}
	return (0);
}
