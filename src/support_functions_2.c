/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   support_functions_2.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/14 15:58:33 by bbremer        #+#    #+#                */
/*   Updated: 2019/10/27 15:12:19 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	*ft_strsldup(const char *src, int start, int len)
{
	int		cx;
	int		cy;
	char	*str;

	cx = start;
	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	cy = 0;
	while (cy < len)
	{
		str[cy] = src[cx];
		cx++;
		cy++;
	}
	str[cy] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t cx;

	cx = 0;
	while (str[cx] != '\0')
		cx++;
	return (cx);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		x;
	size_t		y;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char*)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	return (ft_memset(str, '\0', size));
}
