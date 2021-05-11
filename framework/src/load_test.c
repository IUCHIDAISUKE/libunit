#include "../include/libunit.h"
#include "../include/structure.h"

void load_test(t_unit_test **list, char *name, int (*func)(void))
{
    t_unit_test *new;
    t_unit_test *tmp;

    new = (t_unit_test *)malloc(sizeof(t_unit_test));
    if (!new)
    {
    }
}

//t_linked void *contents < -int a, int *a, char **stres t_linked *next int32_t kind ?
