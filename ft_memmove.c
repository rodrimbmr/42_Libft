/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:42:10 by rmonfort          #+#    #+#             */
/*   Updated: 2024/09/26 15:56:18 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (destc > srcc)
	{
		i = n;
		while (i-- > 0)
			destc[i] = srcc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destc[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
