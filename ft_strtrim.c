/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:18:39 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/08 04:03:17 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	comparator(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		u;
	int		d;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	u = 0;
	while (comparator(s1[u], set) != 0)
		u++;
	d = ft_strlen(s1) - 1;
	while (comparator(s1[d], set) != 0)
		d--;
	res = ft_substr(s1, u, d - u + 1);
	return (res);
}
