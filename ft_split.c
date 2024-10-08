/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:18:31 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/08 03:57:28 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>


static unsigned int	wlc(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
			if((str[i]) != c && str[i])
			{
				count++;
				i++;
			}
			else
				i++;
	}
	return (count);
}

static void	split_cleaner(char **res, int p)
{
	if (p > 0)
	{
		while (p-- > 0)
		{
			free(res[p]);
		}
	}
	free(res);
}

static char	**divisor(char *s, char c, char **res)
{
	int	i;
	int	j;
	int	p;

	p = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if(i < j)
		{
			res[p] = ft_substr(s, i, j - i);
			if (!res[p])
				return (split_cleaner(res, p), NULL);
			p++;
		}
		i = j;
	}
	res [p] = NULL;
	return(res);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)calloc(sizeof(char *), wlc(s, c) + 1);
	if (!result)
		return (NULL);
	result = divisor ((char *)s, c, result);
	return(result);
}
