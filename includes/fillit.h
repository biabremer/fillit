/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/25 13:25:26 by bvan-de-       #+#    #+#                */
/*   Updated: 2019/03/27 17:54:55 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 1691
# define TRUE 1
# define FALSE 0

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct				s_t_tetri_list
{
	int						index;
	int						tetrimino;
	int						order;
	struct s_t_tetri_list	*next;
}							t_tetri_list;

int							input_generator(char *entry, t_tetri_list
							**entry_list);
int							checker_entry(char *entry);
int							error_entry(char *entry);
int							valid_entry(char *entry);
int							valid_tetrimi_1_2(char *entry);
int							valid_tetrimi_3(char *entry);
int							valid_tetrimi_4_7(char *entry);
int							valid_tetrimi_8_11(char *entry);
int							valid_tetrimi_12_15(char *entry);
int							valid_tetrimi_16_19(char *entry);
char						*square_maker(t_tetri_list **entry_list,
							int xtermini);
void						fillit_drawer(t_tetri_list **tetrimino,
							char *field);
int							sqrt_tetrami(int xtermini);
char						*tetrimino_printer(char *field, int *xyz, int i);
char						*tetri_coord(char *field, t_tetri_list *tetrimino);
char						*tetrimino_coord_1_2(char *entry, int sqro,
							t_tetri_list *tetramino);
char						*tetrimino_coord_3(char *entry, int sqro,
							t_tetri_list *tetramino);
char						*tetrimino_coord_4_7(char *entry, int width,
							t_tetri_list *tetramino);
char						*tetrimino_coord_8_11(char *entry, int width,
							t_tetri_list *tetramino);
char						*tetrimino_coord_12_15(char *field, int width,
							t_tetri_list *tetramino);
char						*tetrimino_coord_16_19(char *entry, int sqro,
							t_tetri_list *tetramino);
int							field_rater(char *entry);
char						*tetrimino_eraser(char *entry);
int							fillit_solver(t_tetri_list **entry_list,
							char *field, int sqro);
int							increase_square(char *field, int *temporder);
void						ft_lstpushback_fillit(t_tetri_list **begin_list,
							int tetrimino);
t_tetri_list				*ft_lstnew_fillit(int tetrimino);
char						*tetrimino_printer_main(char *field, int *xyz,
							t_tetri_list *tetramino);
void						ft_lstendpushback_fillit(t_tetri_list **begin_list);
t_tetri_list				*ft_lstend_fillit(t_tetri_list **begin_list);
int							tetrimino_complete(char *entry,
							t_tetri_list *tetrimino);
void						ft_putchar(char c);
void						ft_putstr(const char *s);
int							ft_sqrt(int nb);
int							ft_strcharfind(const char *s, int c);
void						ft_strdel(char **as);
char						*ft_strsldup(const char *src, int start, int len);
size_t						ft_strlen(const char *str);
char						*ft_strdup(const char *s1);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strnew(size_t size);
void						*ft_memalloc(size_t size);
void						*ft_memset(void *str, int c, size_t n);
t_tetri_list				*get_temp(t_tetri_list **tetrimino,
							t_tetri_list *temp, char **field, char **save);
t_tetri_list				*get_last_tetrimino(t_tetri_list **tetrimino,
							int temporder);
t_tetri_list				*get_first_tetrimino(t_tetri_list **tetrimino);
void						reset_every_tetrimino(t_tetri_list **tetrimino);
char						*square_generator(t_tetri_list **entry_list);

#endif
