/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_4_7.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 15:39:02 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	valid_tetrimi_4_l(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 10] == '#'
			&& entry[i + 11] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_5_lrev(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 10] == '#'
			&& entry[i + 9] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_6_lrevupdo(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 6] == '#'
			&& entry[i + 11] == '#')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_7_lupdo(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 5] == '#'
			&& entry[i + 10] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int			valid_tetrimi_4_7(char *entry)
{
	int x;

	x = valid_tetrimi_4_l(entry);
	if (x == 1)
		return (4);
	x = valid_tetrimi_5_lrev(entry);
	if (x == 1)
		return (5);
	x = valid_tetrimi_6_lrevupdo(entry);
	if (x == 1)
		return (6);
	x = valid_tetrimi_7_lupdo(entry);
	if (x == 1)
		return (7);
	else
		return (0);
}
