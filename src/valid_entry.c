/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   valid_entry.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 10:34:42 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	valid_entry(char *entry)
{
	int tetrimi_name;

	tetrimi_name = valid_tetrimi_1_2(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	tetrimi_name = valid_tetrimi_3(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	tetrimi_name = valid_tetrimi_4_7(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	tetrimi_name = valid_tetrimi_8_11(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	tetrimi_name = valid_tetrimi_12_15(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	tetrimi_name = valid_tetrimi_16_19(entry);
	if (tetrimi_name != 0)
		return (tetrimi_name);
	return (tetrimi_name);
}
