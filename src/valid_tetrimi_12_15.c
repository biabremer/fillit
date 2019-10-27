/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_12_15.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 15:39:12 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	valid_tetrimi_12_m(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 4] == '#' && entry[i + 5] == '#'
			&& entry[i + 6] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_13_mupdo(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 2] == '#'
			&& entry[i + 6] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_14_mstri(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 6] == '#'
			&& entry[i + 10] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_15_mstle(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 4] == '#' && entry[i + 5] == '#'
			&& entry[i + 10] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int			valid_tetrimi_12_15(char *entry)
{
	int x;

	x = valid_tetrimi_12_m(entry);
	if (x == 1)
		return (12);
	x = valid_tetrimi_13_mupdo(entry);
	if (x == 1)
		return (13);
	x = valid_tetrimi_14_mstri(entry);
	if (x == 1)
		return (14);
	x = valid_tetrimi_15_mstle(entry);
	if (x == 1)
		return (15);
	else
		return (0);
}
