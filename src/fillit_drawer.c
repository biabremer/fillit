/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit_drawer.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/27 13:37:23 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char			*square_generator(t_tetri_list **entry_list)
{
	char			*field;
	t_tetri_list	*temp;
	static int		square_size;

	if (!square_size)
		square_size = 0;
	temp = *entry_list;
	while (temp->next->order != 0)
		temp = temp->next;
	field = square_maker(entry_list, temp->order);
	square_size++;
	return (field);
}

t_tetri_list	*get_last_tetrimino(t_tetri_list **tetrimino, int temporder)
{
	t_tetri_list	*temptetrimino;

	temptetrimino = *tetrimino;
	while (temptetrimino->order != (temporder - 1))
		temptetrimino = temptetrimino->next;
	temptetrimino->next->index = 0;
	return (temptetrimino);
}

t_tetri_list	*get_first_tetrimino(t_tetri_list **tetrimino)
{
	t_tetri_list	*temptetrimino;

	temptetrimino = *tetrimino;
	while (temptetrimino->order != 1)
		temptetrimino = temptetrimino->next;
	return (temptetrimino);
}

void			reset_every_tetrimino(t_tetri_list **tetrimino)
{
	t_tetri_list	*temp;
	int				i;

	temp = *tetrimino;
	i = temp->order;
	temp = temp->next;
	while (temp->order != i)
	{
		temp->index = 0;
		temp = temp->next;
	}
	temp->index = 0;
}

void			fillit_drawer(t_tetri_list **tetrimino, char *field)
{
	t_tetri_list	*temp;
	char			*save;

	temp = *tetrimino;
	if (!field)
		field = square_generator(tetrimino);
	while (temp->order != 0)
	{
		save = field;
		field = tetri_coord(field, temp);
		if (!field)
			temp = get_temp(tetrimino, temp, &field, &save);
		else
			temp = temp->next;
	}
	ft_putstr(field);
	ft_strdel(&field);
}
