/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 00:18:33 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/04 03:52:38 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rs;
	int		i;
	int		j;

	rs = ft_calloc (sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!rs)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		rs[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		rs[i] = s2[j];
		i++;
		j++;
	}
	return (rs);
}
