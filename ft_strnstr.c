/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihancer <ihancer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:09:05 by ihancer           #+#    #+#             */
/*   Updated: 2024/10/25 18:35:59 by ihancer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (*(to_find) == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		while (src[i + j] == to_find[j] && (j + i) < n)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&src[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
