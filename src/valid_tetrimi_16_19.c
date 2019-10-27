/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_16_19.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 15:39:23 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	valid_tetrimi_16_z(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 6] == '#'
			&& entry[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_17_zrev(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 4] == '#'
			&& entry[i + 5] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_18_zuptopr(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 4] == '#' && entry[i + 5] == '#'
			&& entry[i + 9] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_19_zuptopl(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 6] == '#'
			&& entry[i + 11] == '#')
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int			valid_tetrimi_16_19(char *entry)
{
	int x;

	x = valid_tetrimi_16_z(entry);
	if (x == 1)
		return (16);
	x = valid_tetrimi_17_zrev(entry);
	if (x == 1)
		return (17);
	x = valid_tetrimi_18_zuptopr(entry);
	if (x == 1)
		return (18);
	x = valid_tetrimi_19_zuptopl(entry);
	if (x == 1)
		return (19);
	else
		return (0);
}
