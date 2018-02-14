/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_beta.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 18:20:43 by fbertoia          #+#    #+#             */
/*   Updated: 2018/02/13 18:20:44 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		atoi_beta(char *str)
{
	int i;
	long long value;

	value = 0;
	i = -1;

	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			print_error(-2);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (value > INT_MAX)
			print_error(-3);
		value = value * 10 + (str[i] - 48);
		i++;
	}
	return ((int)value);
}
