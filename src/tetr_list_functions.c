/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tetr_list_functions.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/24 15:38:33 by bbremer        #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_tetri_list	*ft_lstnew_fillit(int tetrimino)
{
	t_tetri_list	*fresh;
	static int		order;

	if (!order)
		order = 1;
	fresh = (t_tetri_list*)malloc(sizeof(t_tetri_list));
	if (fresh == NULL)
		return (NULL);
	else
	{
		fresh->tetrimino = tetrimino;
		fresh->index = 0;
		fresh->order = order;
		order++;
	}
	fresh->next = NULL;
	return (fresh);
}

t_tetri_list	*ft_lstend_fillit(t_tetri_list **begin_list)
{
	t_tetri_list	*fresh;

	fresh = (t_tetri_list*)malloc(sizeof(t_tetri_list));
	if (fresh == NULL)
		return (NULL);
	else
	{
		fresh->tetrimino = 0;
		fresh->index = 0;
		fresh->order = 0;
	}
	fresh->next = *begin_list;
	return (fresh);
}

void			ft_lstendpushback_fillit(t_tetri_list **begin_list)
{
	t_tetri_list	*temp;

	temp = *begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_lstend_fillit(begin_list);
	}
	else
		*begin_list = ft_lstend_fillit(begin_list);
}

void			ft_lstpushback_fillit(t_tetri_list **begin_list, int tetrimino)
{
	t_tetri_list	*temp;

	temp = *begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_lstnew_fillit(tetrimino);
	}
	else
		*begin_list = ft_lstnew_fillit(tetrimino);
}
