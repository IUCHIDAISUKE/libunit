#include "./include/libunit.h"

int	add(void)
{
	printf("ADD\n");
	return (0);
}

int	sub(void)
{
	printf("SUB\n");
	return (0);
}

int	main()
{
	t_unit_test *list;
	t_func *cal;
	char **name;

	cal = (t_func[]){add, sub, add, NULL};
	name = (char *[]){"12", "34", "56", NULL};

	load_test(&list, name, cal);

	while(list)
	{
		printf("list title = %s\n", list->title);
		list->func();
		list = list->next;
	}
}
