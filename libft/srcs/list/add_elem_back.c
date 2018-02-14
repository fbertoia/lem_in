/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elem_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 11:47:15 by fbertoia          #+#    #+#             */
/*   Updated: 2018/02/14 11:47:16 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*add_elem_back(void **alst, void *elem_to_add)
{
	t_void *ptr;

	ptr = (t_void*)*alst;
	if (!alst)
		return (NULL);
	if (!*alst)
		return (*alst = elem_to_add);
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = elem_to_add;
	return (ptr->next);
}
