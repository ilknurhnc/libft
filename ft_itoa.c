/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihancer <ihancer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:14:11 by ihancer           #+#    #+#             */
/*   Updated: 2024/10/28 12:17:48 by ihancer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bas_num(long n)
{
	int	digit_num;

	digit_num = 0;
	if (n < 0)
	{
		digit_num += 1;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		digit_num++;
	}
	return (digit_num);
}

char	*ft_itoa(int n)
{
	int		digit_num;
	char	*s;
	long	num;

	num = n;
	digit_num = bas_num(n);
	s = malloc((digit_num + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[digit_num] = '\0';
	if (n == 0)
		s[0] = '0';
	else if (n < 0)
	{
		s[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		s[--digit_num] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}
