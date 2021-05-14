#include "strlen.h"

int32_t strlen_launcher(void)
{
    t_unit_test *testlist;
	char **name;
    t_func *f;

	testlist = NULL;
	name = (char *[]){"BASIC_TEST", "NULL_TEST", NULL};
    f = (t_func[]){basic_test, null_test, NULL};

    ft_putstr_fd("STRLEN:\n", STDOUT_FILENO);
    load_test(&testlist, name, f);
    return (launch_tests(&testlist));
}
