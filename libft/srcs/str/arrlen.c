/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 11:37:29 by fbertoia          #+#    #+#             */
/*   Updated: 2018/02/14 11:37:31 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	arrlen(char **arr)
{
	int i;

	i = 0;
	if (!arr)
		return (-1);
	while (arr[i])
		i++;
	return (i);
}
