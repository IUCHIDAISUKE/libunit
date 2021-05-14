#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "./utils.h"
# include "./structure.h"
# include "./color.h"

# include <stdio.h>
# include <stdint.h>
# include <sys/wait.h>
# include <signal.h>

void	load_test(t_unit_test **list, char **name, t_func *f);
int		launch_tests(t_unit_test **test_list);

#endif
