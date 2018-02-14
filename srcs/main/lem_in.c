/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 16:27:23 by fbertoia          #+#    #+#             */
/*   Updated: 2018/02/13 16:27:25 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "lem_in.h"

int 	print_error(int err_nb)
{
	if (nb > 0)
		perror("");
	else if (nb == -1)
		ft_dprintf(2, "ERROR : Sth went wrong with the get_next_line\n");
	else if (nb == -2)
		ft_dprintf(2, "ERROR : Wrong input for ant_number, please insert only numbers\n");
	else if (nb == -3)
		ft_dprintf(2, "ERROR : Limit : INT_MAX\n");
	else if (nb == -4)
		ft_dprintf(2, "ERROR : No ants. Please set at least one ant\n");

	exit(1);
}

t_data *get_data(void)
{
	static t_data data;

	return (&data);
}

int  main(int ac, char **av)
{
	int tmp;
	t_data *data;

	data = get_data();
	if ((tmp = parser(ac, av, data)))
		return (tmp);
	return (0);
}
