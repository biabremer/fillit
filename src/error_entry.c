/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_entry.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 13:23:48 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	error_legend(char *entry)
{
	int	i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] != '.' && entry[i] != '#' && entry[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

static int	error_fourhash(char *entry)
{
	int i;
	int hashcount;

	i = 0;
	hashcount = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
			hashcount++;
		i++;
	}
	if (hashcount != 4)
		return (0);
	return (1);
}

static int	error_4x4(char *entry)
{
	int i;
	int j;
	int hashcount;

	i = 0;
	j = 0;
	hashcount = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '\n')
		{
			if (j != 4)
				return (0);
			j = -1;
		}
		j++;
		i++;
	}
	return (1);
}

int			error_entry(char *entry)
{
	int x;

	x = error_legend(entry);
	if (x == 0)
		return (0);
	x = error_fourhash(entry);
	if (x == 0)
		return (0);
	x = error_4x4(entry);
	if (x == 0)
		return (0);
	else
		return (1);
}
