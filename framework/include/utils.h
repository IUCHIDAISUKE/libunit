#ifndef UTILS_H
# define UTILS_H

# include "./structure.h"
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>

# define TESRA 369

bool		free_link(t_unit_test *link);

int32_t		ft_abs(int32_t n);

bool		ft_malloc(void **str, size_t sz, size_t len);

int32_t		ft_linksize(t_unit_test *lst);
t_unit_test	*ft_linklast(t_unit_test *lst);
t_unit_test	*ft_linknew(char *name, t_func data);
void		ft_linkadd_back(t_unit_test **lst, t_unit_test *new);
bool		ft_linkadd_back_new(t_unit_test **linked, char *name, t_func data);

void		print_score(int32_t score, int32_t full_score, int fd);
void		print_score_with_color(int32_t score, int32_t full_score, int fd);

void		print_status_with_color(int32_t end_status, int fd);
void		print_status(int32_t end_status, int fd);

void		print_test_title(char *title, int32_t index, int fd);

void		ft_putnbr_fd(int32_t n, int fd);
void		ft_putnbr_fd_with_color(int32_t n, char *color, int fd);

void		ft_putstr_fd(char *s, int fd);
void		ft_putendl(char *s, int fd);
void		ft_putendl_with_color(char *s, char *color, int fd);
int32_t		ft_putstrerr(char *s);

#endif