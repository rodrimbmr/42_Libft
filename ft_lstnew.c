/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 23:54:05 by rmonfort          #+#    #+#             */
/*   Updated: 2024-10-10 23:54:05 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content_que_queremos_copiar)
{
	struct s_list	*nl;

	nl = ft_calloc(1, sizeof(t_list));
	if (!nl)
		return (NULL);
	nl->content = content_que_queremos_copiar;
	nl->next = NULL;
	return (nl);
}
