#include "../../include/utils.h"

bool	free_link(t_unit_test *link)
{
	t_unit_test	*tmp;

	while (link)
	{
		tmp = link->next;
		free(link);
		link = tmp;
	}
	return (true);
}
