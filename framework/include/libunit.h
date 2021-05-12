#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../../lib/libft/libft.h"
# include "./utils.h"
# include "./structure.h"
# include "./color.h"

# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <sys/wait.h>
# include <signal.h>

void load_test(t_unit_test **list, char **name, func *f);

#endif
