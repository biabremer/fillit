/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_4_7.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/28 10:43:48 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static char	*tetrimino_coord_4_l(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width + 1;
	xyz[1] = width + width + 2;
	xyz[2] = width + width + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_5_lrev(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width + 1;
	xyz[1] = width + width + 2;
	xyz[2] = width + width + 1;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_6_lrevupdo(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = width + 2;
	xyz[2] = width + width + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_7_lupdo(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = width + 1;
	xyz[2] = width + width + 2;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

char		*tetrimino_coord_4_7(char *entry, int width,
			t_tetri_list *tetramino)
{
	if (tetramino->tetrimino == 4)
		entry = tetrimino_coord_4_l(entry, width, tetramino);
	if (tetramino->tetrimino == 5)
		entry = tetrimino_coord_5_lrev(entry, width, tetramino);
	if (tetramino->tetrimino == 6)
		entry = tetrimino_coord_6_lrevupdo(entry, width, tetramino);
	if (tetramino->tetrimino == 7)
		entry = tetrimino_coord_7_lupdo(entry, width, tetramino);
	if (entry == NULL)
		return (0);
	return (entry);
}
