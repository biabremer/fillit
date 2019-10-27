/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_8_11.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/28 10:44:02 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static char	*tetrimino_coord_8_llaydoex(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width - 1;
	xyz[1] = width;
	xyz[2] = width + 1;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_9_llaydosad(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = 2;
	xyz[2] = width + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_10_llaydorevex(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = width + 1;
	xyz[1] = width + 2;
	xyz[2] = width + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_11_llaydorevsad(char *entry, int width,
			t_tetri_list *tetramino)
{
	int xyz[3];

	xyz[0] = 1;
	xyz[1] = 2;
	xyz[2] = width + 1;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

char		*tetrimino_coord_8_11(char *entry, int width,
			t_tetri_list *tetramino)
{
	if (tetramino->tetrimino == 8)
		entry = tetrimino_coord_8_llaydoex(entry, width, tetramino);
	if (tetramino->tetrimino == 9)
		entry = tetrimino_coord_9_llaydosad(entry, width, tetramino);
	if (tetramino->tetrimino == 10)
		entry = tetrimino_coord_10_llaydorevex(entry, width, tetramino);
	if (tetramino->tetrimino == 11)
		entry = tetrimino_coord_11_llaydorevsad(entry, width, tetramino);
	if (entry == NULL)
		return (0);
	return (entry);
}
