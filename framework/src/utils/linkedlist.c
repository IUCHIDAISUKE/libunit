#include "../../include/utils.h"

// Get list size
int32_t	ft_linksize(t_unit_test *lst)
{
	if (!lst)
		return (0);
	return (ft_linksize(lst->next) + 1);
}

// Get last objct from linklst
t_unit_test	*ft_linklast(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// Make new linklist
t_unit_test	*ft_linknew(char *name, t_func data)
{
	t_unit_test	*test;

	if (!(ft_malloc((void **)&test, sizeof(t_unit_test), 1)))
		return (NULL);
	test->func = data;
	test->title = name;
	test->next = NULL;
	return (test);
}

// Add the new element to the last of lst
void	ft_linkadd_back(t_unit_test **lst, t_unit_test *new)
{
	t_unit_test	*tmp;

	if (!(*lst))
	{
		*lst = new;
		(*lst)->next = NULL;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

// Add the new content of data, name to the last of lst
bool	ft_linkadd_back_new(t_unit_test **linked, char *name, t_func data)
{
	t_unit_test	*link;

	link = ft_linknew(name, data);
	if (!link || !linked)
		return (false);
	ft_linkadd_back(linked, link);
	return (true);
}
