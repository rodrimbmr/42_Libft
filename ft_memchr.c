/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:10:33 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/01 20:57:52 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ch == s2[i])
			return ((void *)(s2 + i));
		i++;
	}
	return (NULL);
}
