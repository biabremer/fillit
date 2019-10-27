/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_3.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/28 10:37:00 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	*tetrimino_coord_3(char *entry, int sqro, t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = sqro + 1;
	xyz[2] = sqro + 2;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}
