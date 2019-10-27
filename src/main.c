/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 13:26:39 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	check_argc(int argc)
{
	if (argc == 1)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (1);
	}
	return (0);
}

static char	*get_entry(char **argv)
{
	int				ret;
	char			*buf;
	int				fd;

	ret = 1;
	buf = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	if (ft_strlen(buf) == 0)
		return (NULL);
	return (buf);
}

int			main(int argc, char **argv)
{
	char			*entry;
	t_tetri_list	*entry_list;
	int				tetriminbr;

	entry = NULL;
	if (check_argc(argc))
		return (0);
	entry = get_entry(argv);
	if (!entry)
	{
		ft_putstr("error\n");
		return (0);
	}
	entry_list = NULL;
	tetriminbr = input_generator(entry, &entry_list);
	ft_strdel(&entry);
	if (tetriminbr == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	fillit_drawer(&entry_list, NULL);
	return (1);
}
