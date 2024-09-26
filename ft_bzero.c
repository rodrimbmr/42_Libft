/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:20:41 by rmonfort          #+#    #+#             */
/*   Updated: 2024/09/19 20:38:52 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s = malloc(15);
	strcpy(s, "Hola Rodri");
	printf("Frase inicial -> %s\n", s);
	ft_bzero(s, 3);
	printf("Frase final -> %s\n", s);
	free(s);
	return(0);
}
*/
