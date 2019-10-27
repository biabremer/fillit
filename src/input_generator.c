/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_generator.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 17:10:47 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	get_tetriminbr(char *entry, t_tetri_list **entry_list, int i,
			int *j)
{
	char	*newtetrimi_str;
	int		tetrimi_name;

	newtetrimi_str = ft_strsldup(entry, *j, (i - *j));
	if ((i - *j) != 19)
	{
		ft_putstr("error\n");
		exit(1);
	}
	ft_strdel(&newtetrimi_str);
	newtetrimi_str = ft_strsldup(entry, *j, 20);
	*j = i + 2;
	tetrimi_name = checker_entry(newtetrimi_str);
	if (tetrimi_name == 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
	ft_lstpushback_fillit(entry_list, tetrimi_name);
	ft_strdel(&newtetrimi_str);
	return (1);
}

static int	ft_tetriminbr(char *entry, t_tetri_list **entry_list)
{
	int		j;
	int		i;
	int		tetriminbr;

	j = 0;
	i = 0;
	tetriminbr = 0;
	while (i < (int)ft_strlen(entry) || entry[i] != '\0')
	{
		if ((entry[i] == '\n' && (entry[i + 1] == '\n' || entry[i + 1] == '\0'))
		|| entry[i + 1] == '\0')
			tetriminbr += get_tetriminbr(entry, entry_list, i, &j);
		if (tetriminbr > 26)
			return (-1);
		i++;
	}
	return (tetriminbr);
}

int			input_generator(char *entry, t_tetri_list **entry_list)
{
	int		i;
	int		tetriminbr;

	i = 0;
	if (entry[(int)ft_strlen(entry) - 1] == '\n'
	&& entry[(int)ft_strlen(entry) - 2] == '\n')
		return (-1);
	if (ft_strcharfind(entry, '\n') == -1)
		return (-1);
	tetriminbr = ft_tetriminbr(entry, entry_list);
	ft_lstendpushback_fillit(entry_list);
	return (tetriminbr);
}
