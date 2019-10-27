/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   support_functions_3.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/14 15:58:33 by bbremer        #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void			*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	ft_memset(str, 0, size);
	return (str);
}

void			*ft_memset(void *str, int c, size_t n)
{
	size_t x;

	x = 0;
	while (x < n)
	{
		((unsigned char *)str)[x] = c;
		x++;
	}
	return (str);
}

t_tetri_list	*get_temp(t_tetri_list **tetrimino, t_tetri_list *temp,
				char **field, char **save)
{
	ft_strdel(field);
	if (temp->order != 1)
	{
		*field = tetrimino_eraser(*save);
		temp = get_last_tetrimino(tetrimino, temp->order);
	}
	else
	{
		ft_strdel(save);
		*field = square_generator(tetrimino);
		reset_every_tetrimino(tetrimino);
		temp = get_first_tetrimino(tetrimino);
	}
	return (temp);
}
