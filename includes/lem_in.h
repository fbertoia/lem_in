/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertoia <fbertoia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:36:55 by fbertoia          #+#    #+#             */
/*   Updated: 2018/01/22 02:11:35 by fbertoia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

#include <stdlib.h>
#include <errno.h>

enum e_next_line
{
	start_info_line,
	end_info_line
};

typedef struct	s_room
{
	struct s_room *next;
	struct s_room *to;
	char *name;
	int x;
	int y;
	int ant_number;
}				t_room;

typedef struct	s_data
{
	struct s_room *list_rooms;
	int number_of_ants;
	int starting_point;
	int ending_point;
	int parser;
	char *line;
	int next_line;
	int fd;
	char **room_info;
}				t_data;

int 	parser(int ac, char **av);
t_data *get_data(void);
int		atoi_beta(char *str);


#endif
