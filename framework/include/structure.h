#ifndef STRUCTURE_H
# define STRUCTURE_H

// Change this function type
typedef int (*func)(void);
typedef struct s_unit_test	t_unit_test;
struct s_unit_test
{
	char				*title;
	int					(*func)(void);
	struct s_unit_test	*next;
};

#endif
