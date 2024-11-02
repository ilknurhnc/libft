/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihancer <ihancer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:42:34 by ihancer           #+#    #+#             */
/*   Updated: 2024/10/22 13:01:54 by ihancer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	if (d == s)
		return (dest);
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
