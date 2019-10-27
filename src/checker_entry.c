/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker_entry.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bvan-de- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 13:23:31 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:11:58 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	checker_entry(char *entry)
{
	int x;

	x = error_entry(entry);
	if (x == 0)
		return (0);
	x = valid_entry(entry);
	if (x != 0)
		return (x);
	else
		return (0);
}
