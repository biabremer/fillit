/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord_16_19.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/28 10:44:26 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static char	*tetrimino_coord_16_z(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	int	xyz[3];

	xyz[0] = 1;
	xyz[1] = sqro + 2;
	xyz[2] = sqro + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_17_zrev(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	int	xyz[3];

	xyz[0] = 1;
	xyz[1] = sqro;
	xyz[2] = sqro + 1;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_18_zuptopr(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	int	xyz[3];

	xyz[0] = sqro;
	xyz[1] = sqro + 1;
	xyz[2] = sqro + sqro + 1;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

static char	*tetrimino_coord_19_zuptopl(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	int	xyz[3];

	xyz[0] = sqro + 1;
	xyz[1] = sqro + 2;
	xyz[2] = sqro + sqro + 3;
	if (!tetrimino_printer_main(entry, xyz, tetramino))
		return (NULL);
	return (entry);
}

char		*tetrimino_coord_16_19(char *entry, int sqro,
			t_tetri_list *tetramino)
{
	if (tetramino->tetrimino == 16)
		entry = tetrimino_coord_16_z(entry, sqro, tetramino);
	if (tetramino->tetrimino == 17)
		entry = tetrimino_coord_17_zrev(entry, sqro, tetramino);
	if (tetramino->tetrimino == 18)
		entry = tetrimino_coord_18_zuptopr(entry, sqro, tetramino);
	if (tetramino->tetrimino == 19)
		entry = tetrimino_coord_19_zuptopl(entry, sqro, tetramino);
	if (entry == NULL)
		return (0);
	return (entry);
}
