/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:35:50 by rmonfort          #+#    #+#             */
/*   Updated: 2024/09/28 01:14:24 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		rest;
	char	*st1;
	char	*st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	rest = 0;
	while((st1[i] != '\0' || st2[i] != '\0') && (i < n))
	{
		if (st1[i] != st2[i])
		{
			rest = st1[i] - st2[i];
			return (rest);
		}
		i++;
	}
	return (rest);
}
