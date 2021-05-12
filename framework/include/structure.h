#ifndef STRUCTURE_H
# define STRUCTURE_H

// Change this function type
typedef int					(*t_func)(void);

typedef struct s_unit_test	t_unit_test;
struct s_unit_test
{
	char				*title;
	t_func				func;
	struct s_unit_test	*next;
};

#endif
