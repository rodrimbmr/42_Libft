/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:05:38 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/01 21:33:01 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i] != '\0' && (i + j) < len)
			{
				if (big[i + j] != little[j])
					break ;
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
