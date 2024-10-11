/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 06:08:28 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/09 19:09:50 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	num_counter(int n)
{
	unsigned long	c;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (!n)
		return (ft_strdup("0"));
	len = num_counter(n);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	len--;
	while (n)
	{
		res[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
