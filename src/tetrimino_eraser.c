/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_eraser.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/04 17:58:15 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	*tetrimino_eraser(char *entry)
{
	int i;
	int alpha;

	i = 0;
	alpha = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] != '.' && entry[i] != '\n')
		{
			if (entry[i] > 64 && entry[i] < 91)
			{
				if (alpha <= entry[i])
					alpha = entry[i];
			}
		}
		i++;
	}
	i = 0;
	while (entry[i] != '\0')
	{
		if (entry[i] == alpha)
			entry[i] = '.';
		i++;
	}
	return (entry);
}
