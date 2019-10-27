/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_1_2.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/27 15:09:18 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static char	*tetrimino_coord_1_line(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = sqro + 1;
	xyz[1] = sqro + sqro + 2;
	xyz[2] = sqro + sqro + sqro + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_2_column(char *entry, t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = 2;
	xyz[2] = 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

char		*tetrimino_coord_1_2(char *entry, int sqro, t_tetri_list *tetramino)
{
	if (tetramino->tetrimino == 1)
		entry = tetrimino_coord_1_line(entry, sqro, tetramino);
	if (tetramino->tetrimino == 2)
		entry = tetrimino_coord_2_column(entry, tetramino);
	if (entry == NULL)
		return (0);
	return (entry);
}
