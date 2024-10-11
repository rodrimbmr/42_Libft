/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:04:45 by rmonfort          #+#    #+#             */
/*   Updated: 2024/09/26 18:04:51 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    // Definir los buffers y las cadenas fuente
    char dst1[20];
    char dst2[10];
    const char *src = "Hola, mundo!";
    size_t size1 = 20;
    size_t size2 = 10;

    // Llamar a la función ft_strlcpy y mostrar los resultados
    size_t result1 = ft_strlcpy(dst1, src, size1);
    size_t result2 = ft_strlcpy(dst2, src, size2);

    // Imprimir los resultados
    printf("Destino 1: %s (resultado: %zu)\n", dst1, result1);
    printf("Destino 2: %s (resultado: %zu)\n", dst2, result2);

    return 0;
}
*/
