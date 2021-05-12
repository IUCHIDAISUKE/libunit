#include "../../include/utils.h"

bool	free_link(t_unit_test *link, int32_t n)
{
	int32_t		i;
	t_unit_test	*tmp;

	i = 0;
	while (i < n)
	{
		tmp = link;
		free(tmp);
		tmp = tmp->next;
		i++;
	}
	return (true);
}
