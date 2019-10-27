/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetrimi_printer.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/27 15:11:12 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void		*fillit_memset(void *str, int c, size_t x)
{
	((unsigned char *)str)[x] = c;
	return (str);
}

static int		fits_tetramino(char *field, int *xyz, int i)
{
	if (field[i + xyz[0]] == '.' && field[i + xyz[1]] == '.' &&
	field[i + xyz[2]] == '.' && field[i] == '.')
		return (TRUE);
	return (FALSE);
}

static int		tetrimino_last_alpha(char *field)
{
	int i;
	int alpha;

	i = 0;
	alpha = 64;
	while (field[i] != '\0')
	{
		if (field[i] != '.' && field[i] != '\n')
		{
			if (field[i] > 64 && field[i] < 91)
			{
				if (alpha <= field[i])
					alpha = field[i];
			}
		}
		i++;
	}
	return (alpha + 1);
}

static char		*printer_tetramino(char *field, int *xyz,
				t_tetri_list *tetramino)
{
	int alpha;
	int i;

	alpha = tetrimino_last_alpha(field);
	i = tetramino->index - 1;
	fillit_memset(field, alpha, i);
	fillit_memset(field, alpha, i + xyz[0]);
	fillit_memset(field, alpha, i + xyz[1]);
	fillit_memset(field, alpha, i + xyz[2]);
	return (field);
}

char			*tetrimino_printer_main(char *field, int *xyz,
				t_tetri_list *tetramino)
{
	int i;

	i = tetramino->index;
	while (field[i] != '\0')
	{
		if (fits_tetramino(field, xyz, i))
		{
			tetramino->index = i + 1;
			field = printer_tetramino(field, xyz, tetramino);
			return (field);
		}
		i++;
	}
	return (NULL);
}
