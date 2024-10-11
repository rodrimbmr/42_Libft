/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 03:10:01 by rmonfort          #+#    #+#             */
/*   Updated: 2024-10-11 03:10:01 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)// Mientras no lleguemos al final de la lista
	{
		count++;// Incrementamos el contador
		lst = lst->next;// Avanzamos al siguiente nodo
	}
	return (count);// Devolvemos el número de nodos
}
