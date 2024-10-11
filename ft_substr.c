/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 03:31:21 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/04 01:18:06 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sd;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start >= s_len)
		return ((char *)ft_calloc(1, 1));
	sd = ((char *)ft_calloc(sizeof(char), len + 1));
	if (!sd)
		return (NULL);
	s += start;
	sd = ft_memcpy(sd, s, len);
	return (sd);
}
