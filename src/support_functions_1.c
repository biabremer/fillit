/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   support_functions_1.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/14 15:58:33 by bbremer        #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *s)
{
	int x;

	if (!s)
		return ;
	x = 0;
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
}

int		ft_sqrt(int nb)
{
	int cx;

	cx = 1;
	while (nb > 0 && cx <= 46340 && nb <= 2147395600)
	{
		if ((cx * cx) == nb)
			return (cx);
		cx++;
	}
	return (0);
}

int		ft_strcharfind(const char *s, int c)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			return (x);
		x++;
	}
	return (-1);
}

void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
