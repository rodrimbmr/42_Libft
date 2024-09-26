/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:20:16 by rmonfort          #+#    #+#             */
/*   Updated: 2024/09/26 12:09:39 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>


int main()
{
    char src[] = "Hello, World!";
    char dest[20];  // Make sure the destination is large enough

    // Use the custom memcpy to copy the string
    memcpy(dest, src, strlen(src) + 1); // +1 to include the null terminator

    // Output the copied result
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/
