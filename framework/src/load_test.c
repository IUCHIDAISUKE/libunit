#include "../include/utils.h"

void	load_test(t_unit_test **link, char *title, t_func f)
{
	if (!ft_linkadd_back_new(link, title, f))
		ft_putstrerr("ERROR while loading test");
}
