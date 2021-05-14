#include "../include/utils.h"

void load_test(t_unit_test **link, char **name, t_func *f)
{
	int32_t sz;


	sz = -1;
	while (name[++sz])
		if (!ft_linkadd_back_new(link, name[sz], f[sz]) && free_link(*link))
			ft_putstrerr("Link error :(\n");
}
