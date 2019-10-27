/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_12_15.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/28 10:44:14 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static char	*tetrimino_coord_12_m(char *field, int width,
			t_tetri_list *tetramino)
{
	int	xyz[3];

	xyz[0] = width;
	xyz[1] = width + 1;
	xyz[2] = width + 2;
	if (!tetrimino_printer_main(field, xyz, tetramino))
		return (NULL);
	return (field);
}

static char	*tetrimino_coord_13_mupdo(char *field, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = 2;
	xyz[2] = width + 2;
	if (!tetrimino_printer_main(field, xyz, tetramino))
		return (NULL);
	return (field);
}

static char	*tetrimino_coord_14_mstri(char *field, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width + 1;
	xyz[1] = width + 2;
	xyz[2] = width + width + 2;
	if (!tetrimino_printer_main(field, xyz, tetramino))
		return (NULL);
	return (field);
}

static char	*tetrimino_coord_15_mstle(char *field, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width;
	xyz[1] = width + 1;
	xyz[2] = width + width + 2;
	if (!tetrimino_printer_main(field, xyz, tetramino))
		return (NULL);
	return (field);
}

char		*tetrimino_coord_12_15(char *field, int width,
			t_tetri_list *tetramino)
{
	if (tetramino->tetrimino == 12)
		field = tetrimino_coord_12_m(field, width, tetramino);
	if (tetramino->tetrimino == 13)
		field = tetrimino_coord_13_mupdo(field, width, tetramino);
	if (tetramino->tetrimino == 14)
		field = tetrimino_coord_14_mstri(field, width, tetramino);
	if (tetramino->tetrimino == 15)
		field = tetrimino_coord_15_mstle(field, width, tetramino);
	if (field == NULL)
		return (0);
	return (field);
}
