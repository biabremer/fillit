/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_1_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 15:38:42 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	valid_tetrimi_1_line(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 10] == '#'
			&& entry[i + 15] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_2_column(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 2] == '#'
			&& entry[i + 3] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int			valid_tetrimi_1_2(char *entry)
{
	int x;

	x = valid_tetrimi_1_line(entry);
	if (x == 1)
		return (1);
	x = valid_tetrimi_2_column(entry);
	if (x == 1)
		return (2);
	else
		return (0);
}
