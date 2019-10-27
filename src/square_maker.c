/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   square_maker.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 17:39:35 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	*memset_fillit(void *str, int sqro, size_t n)
{
	int				x;
	int				y;

	x = 0;
	y = 1;
	while (x < (int)n)
	{
		((unsigned char *)str)[x] = '.';
		if (y == sqro + 1)
		{
			((unsigned char *)str)[x] = '\n';
			y = 0;
		}
		y++;
		x++;
	}
	((unsigned char *)str)[x] = '\0';
	return (str);
}

int			sqrt_tetrami(int xtermini)
{
	int		y;

	y = xtermini * 4;
	while (!ft_sqrt(y))
		y++;
	y = ft_sqrt(y);
	return (y);
}

char		*square_maker(t_tetri_list **entry_list, int xtermini)
{
	t_tetri_list	*temp;
	static int		sqro;
	int				i;
	char			*field;

	temp = *entry_list;
	i = xtermini;
	if (!sqro)
		sqro = sqrt_tetrami(xtermini);
	else
		sqro++;
	field = (char *)malloc(sqro * sqro + sqro + 1);
	if (!field)
	{
		ft_putstr("error\n");
		exit(1);
	}
	field = memset_fillit(field, sqro, (sqro * sqro + sqro));
	return (field);
}
