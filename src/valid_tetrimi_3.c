/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_tetrimi_3.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 15:38:53 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	valid_tetrimi_3(char *entry)
{
	int i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == '#')
		{
			if (entry[i + 1] == '#' && entry[i + 5] == '#'
			&& entry[i + 6] == '#')
				return (3);
		}
		i++;
	}
	return (0);
}
