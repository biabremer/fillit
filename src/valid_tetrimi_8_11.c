/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_8_11.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 16:05:02 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	valid_tetrimi_8_llaydoex(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 3] == '#' && entry[i + 4] == '#'
			&& entry[i + 5] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_9_llaydosad(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 2] == '#'
			&& entry[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_10_llaydorevex(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 5] == '#' && entry[i + 6] == '#'
			&& entry[i + 7] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

static int	valid_tetrimi_11_llaydorevsad(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 2] == '#'
			&& entry[i + 5] == '#')
				return (1);
		}
		i++;
	}
	return (0);
}

int			valid_tetrimi_8_11(char *entry)
{
	int x;

	x = valid_tetrimi_8_llaydoex(entry);
	if (x == 1)
		return (8);
	x = valid_tetrimi_9_llaydosad(entry);
	if (x == 1)
		return (9);
	x = valid_tetrimi_10_llaydorevex(entry);
	if (x == 1)
		return (10);
	x = valid_tetrimi_11_llaydorevsad(entry);
	if (x == 1)
		return (11);
	else
		return (0);
}
