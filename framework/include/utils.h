#ifndef UTILS_H
# define UTILS_H

# include "./structure.h"
# include "../../lib/libft/libft.h"

# include <stdint.h>

int32_t		ft_linksize(t_unit_test *lst);
t_unit_test	*ft_linklast(t_unit_test *lst);
t_unit_test	*ft_linknew(char *name, func data);
void		ft_linkadd_back(t_unit_test **lst, t_unit_test *new);
bool		ft_linkadd_back_new(t_unit_test **linked, char *name, func data);

ssize_t	ft_putstr(char *s, int fd);
ssize_t	ft_putendl(char *s, int fd);
ssize_t	ft_putstrerr(char *s);
ssize_t	ft_putstrout(char *s);

bool	free_link(t_unit_test *link, int32_t n);

size_t	ft_strlen(const char *s);

bool	ft_malloc(void **str, size_t sz, size_t len);

#endif
