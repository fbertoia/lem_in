/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 17:38:10 by fbertoia          #+#    #+#             */
/*   Updated: 2018/02/13 17:38:11 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_room *create_room(void)
{
	t_room *elem;

	elem = (t_room*)malloc(sizeof(t_room));
	if (!elem)
		print_error(errno);
	elem->next = NULL;
	elem->to = (t_room*)malloc(t;
	elem->ant_number = 0;
	elem->starting_point = 0;
	elem->ending_point = 0;
	elem->x = 0;
	elem->y = 0;
	return (elem);
}

int 	get_ant_number(t_data *data, char *line)
{
	data->ant_number = atoi_beta(line);
	if (data->ant_number == 0)
		print_error(-4);
	data->parser++;
}

t_room *add_info(t_room *elem, t_data *data)
{
	elem->name = ft_strdup(data->room_info[0]);
	elem->x = atoi_beta(data->room_info[1]);
	elem->y = atoi_beta(data->room_info[2]);
}

int 	get_room_places(t_data *data, char *line)
{
	int ret;

	if (!next_line && ((ret = ft_strequ(line, "##start")) || ft_strequ(line, "##end")))
	{
		ft_memdel((void**)data->line);
		if (get_next_line(data->fd, data->line) < 0)
			print_error(errno);
		if (data->line == NULL)
			return (-1);
		data->next_line = ret ? 1 << start_info_line : 1 << end_info_line;
		return (get_room_places(data, data->line));
	}
	data->room_info = ft_strsplitwhitespace(line);
	if ((ret = arrlen(data->room_info)) < 3))
		return (get_room_connections(data, line));
	else if (ret > 3)
		return (-1);
	add_coordinates((t_room*)add_elem_front(&data->list_room, create_room()));
	data->next_line = 0;
	del_arr(&data->room_info);
	data->parser++;
	return (0);
}

int 	get_room_tunnels(t_data *data, char *line)
{

}

int 	is_a_comment(char *line)
{
	if (!line)
		return (1);
	if (line[0] == '#' && line[1] != '#')
		return (1);
	return (0);
}

int 	check_line(t_data *data, char *line, int i)
{
	int 	ret;

	if (is_a_comment(line))
		return (0);
	if (data->parser == 0)
		ret = get_ant_number(data, line);
	else if (data->parser > 0)
		ret = get_room_places(data, line);
	else if (data->parser < 0)
		ret = get_room_tunnels(data, line);
	return (ret);
}

int 	parser(int ac, char **av, t_data *data, char **line)
{
	int fd;
	int ret;
	char *line;

	i = 0;
	if (ac != 2)
		print_error(errno = EINVAL);
	if (data->fd = open(av[1], O_RDONLY) == -1)
		return (1);
	while ((ret = get_next_line(data->fd, data->line)) > 0)
	{
		if (ret < 0)
			print_error(1);
		if (check_line(data, data->line, i)) < 0)
			break ;
		ft_memdel((void**)&line);
	}
	return (0);
}
