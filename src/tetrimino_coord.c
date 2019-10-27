/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimino_coord.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/27 14:58:43 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	get_width(char *field)
{
	int		i;

	i = 0;
	while (field[i] != '\n')
	{
		i++;
	}
	return (i);
}

char		*tetri_coord(char *field, t_tetri_list *tetrimino)
{
	char	*tempchar;
	int		width;

	width = get_width(field);
	if (tetrimino->tetrimino >= 1 && tetrimino->tetrimino <= 2)
		tempchar = tetrimino_coord_1_2(field, width, tetrimino);
	if (tetrimino->tetrimino == 3)
		tempchar = tetrimino_coord_3(field, width, tetrimino);
	if (tetrimino->tetrimino >= 4 && tetrimino->tetrimino <= 7)
		tempchar = tetrimino_coord_4_7(field, width, tetrimino);
	if (tetrimino->tetrimino >= 8 && tetrimino->tetrimino <= 11)
		tempchar = tetrimino_coord_8_11(field, width, tetrimino);
	if (tetrimino->tetrimino >= 12 && tetrimino->tetrimino <= 15)
		tempchar = tetrimino_coord_12_15(field, width, tetrimino);
	if (tetrimino->tetrimino >= 16 && tetrimino->tetrimino <= 19)
		tempchar = tetrimino_coord_16_19(field, width, tetrimino);
	if (tempchar == NULL)
		return (0);
	return (tempchar);
}
